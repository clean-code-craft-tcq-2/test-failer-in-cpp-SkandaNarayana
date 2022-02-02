#include "alerter.h"

int alertFailureCount = 0;

int NetworkAlerterStub::networkAlert(const float celcius)const {
    if (celcius > NORMAL_BODY_TEMP){
        std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
        return THRESHOLD_CROSSED_RETVAL;
    }
    return NORMAL_THRESHOLD_RETVAL;
}


float convertToCelcius(const float farenheit){
    return (farenheit - 32) * 5 / 9;
}

void alertInCelcius(const float farenheit, IAlerter* AlertOverNetwork) {
    float celcius = convertToCelcius(farenheit);
    int returnCode = AlertOverNetwork->networkAlert(celcius);
    if (returnCode != NORMAL_THRESHOLD_RETVAL) {
        alertFailureCount++;
    }
}
