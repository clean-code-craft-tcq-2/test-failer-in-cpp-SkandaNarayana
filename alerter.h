#ifndef TEST_FAILER_IN_CPP_SKANDANARAYANA_ALERTER_H
#define TEST_FAILER_IN_CPP_SKANDANARAYANA_ALERTER_H

#include <iostream>
#include "IAlerter.h"

#define NORMAL_BODY_TEMP 98.7
#define NORMAL_THRESHOLD_RETVAL 200
#define THRESHOLD_CROSSED_RETVAL 500

extern int alertFailureCount;

class NetworkAlerterStub : public IAlerter{
public:
    int networkAlert(const float celcius) const;
};

float convertToCelcius(const float farenheit);
void alertInCelcius(const float farenheit, IAlerter* AlertOverNetwork);

#endif //TEST_FAILER_IN_CPP_SKANDANARAYANA_ALERTER_H
