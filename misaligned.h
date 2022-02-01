#ifndef TEST_FAILER_IN_CPP_SKANDANARAYANA_MISALIGNED_H
#define TEST_FAILER_IN_CPP_SKANDANARAYANA_MISALIGNED_H

#include <iostream>
#include <cstring>

static const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
static const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate", "Purple"};

size_t getTotalColorPair(const char* majorColor[], const char* minorColor[]);
size_t getMaxLengthOfString(const char* colorList[]);
std::string addNecessarySpacing(const std::string& colour, const size_t length);
void printColorMap();

#endif //TEST_FAILER_IN_CPP_SKANDANARAYANA_MISALIGNED_H
