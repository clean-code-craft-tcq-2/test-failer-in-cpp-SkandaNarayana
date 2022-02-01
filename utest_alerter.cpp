#include "alerter.h"
#include <assert.h>


int main() {
    IAlerter* alert = new NetworkAlerterStub;
    alertInCelcius(400.5, alert);
    assert(alertFailureCount == 1);

    alertInCelcius(103.6, alert);
    assert(alertFailureCount == 1);
    std::cout << alertFailureCount << " alerts failed.\n";

    int networkAlertOutput = alert->networkAlert(NORMAL_BODY_TEMP);
    assert(networkAlertOutput == 200);

    networkAlertOutput = alert->networkAlert(100);
    assert(networkAlertOutput == 500);

    std::cout << "All is well (maybe!)\n";
    return 0;
}

