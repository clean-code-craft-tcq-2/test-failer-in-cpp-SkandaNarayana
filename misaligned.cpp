#include "misaligned.h"

size_t getMaxLengthOfString(const char* colorList[]){
    size_t maxLengthColor = 0;
    for(size_t i = 0; i < 5; i++)
        if(maxLengthColor < strlen(colorList[i]))
            maxLengthColor = strlen(colorList[i]);
    return maxLengthColor;
}

std::string addNecessarySpacing(const std::string& colour, const size_t length){
    std::string outputString = colour;
    size_t colourStringLength = colour.size();
    size_t extraSpacesToBeAdded = length - colourStringLength;
    for(size_t i = 0; i <= extraSpacesToBeAdded; i++){
        outputString += " ";
    }
    outputString += "| ";
    return outputString;
}


void printColorMap() {
    int majorColorIndex = 0, minorColorIndex = 0;
    size_t maxLengthMajorColor = getMaxLengthOfString(majorColor);
    size_t totalColourPair = sizeof(majorColor) / sizeof(majorColor[0]) * sizeof(minorColor) / sizeof(minorColor[0]);
    size_t maxNumberOfDigits = std::to_string(totalColourPair).size();

    for(majorColorIndex = 0; majorColorIndex < 5; majorColorIndex++) {
        for(minorColorIndex = 0; minorColorIndex < 5; minorColorIndex++) {
            std::cout << addNecessarySpacing(std::to_string(majorColorIndex * 5 + minorColorIndex), maxNumberOfDigits)
                      << addNecessarySpacing(majorColor[majorColorIndex], maxLengthMajorColor)
                      << minorColor[majorColorIndex] << "\n";
        }
    }
}

