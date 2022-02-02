#include "alerter.h"
#include <cassert>


int main() {
    IAlerter* alert = new NetworkAlerterStub;
    alertInCelcius(400.5, alert);
    assert(alertFailureCount == 1);

    alertInCelcius(103.6, alert);
    assert(alertFailureCount == 1);
    std::cout << alertFailureCount << " alerts failed.\n";

    int networkAlertOutput = alert->networkAlert(NORMAL_BODY_TEMP);
    assert(networkAlertOutput == NORMAL_THRESHOLD_RETVAL);

    networkAlertOutput = alert->networkAlert(100);
    assert(networkAlertOutput == THRESHOLD_CROSSED_RETVAL);

    float testCelcius = convertToCelcius(104);
    assert(testCelcius == 40);

    std::cout << "All is well (maybe!)\n";
    return 0;
}

