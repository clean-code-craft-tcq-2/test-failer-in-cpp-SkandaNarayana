#include "alerter.h"

int alertFailureCount = 0;

int NetworkAlerterStub::networkAlert(const float celcius){
    if (celcius > NORMAL_BODY_TEMP){
        std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
        return 500;
    }
    return 200;
}


void alertInCelcius(const float farenheit, IAlerter* AlertOverNetwork) {
    float celcius = (farenheit - 32) * 5 / 9;
    int returnCode = AlertOverNetwork->networkAlert(celcius);
    if (returnCode != 200) {
        alertFailureCount++;
    }
}
