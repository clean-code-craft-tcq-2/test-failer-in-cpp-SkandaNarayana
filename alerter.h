#ifndef TEST_FAILER_IN_CPP_SKANDANARAYANA_ALERTER_H
#define TEST_FAILER_IN_CPP_SKANDANARAYANA_ALERTER_H

#include <iostream>

#define NORMAL_BODY_TEMP 98.7
extern int alertFailureCount;


class IAlerter{
public:
    virtual int networkAlert(float) = 0;
};

class NetworkAlerterStub : public IAlerter{
public:
    int networkAlert(const float celcius);
};

void alertInCelcius(const float farenheit, IAlerter* AlertOverNetwork);

#endif //TEST_FAILER_IN_CPP_SKANDANARAYANA_ALERTER_H
