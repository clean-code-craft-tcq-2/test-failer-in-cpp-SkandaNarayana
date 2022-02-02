#include "misaligned.h"

std::string majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
std::string minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

size_t numberOfMajorColor = sizeof(majorColor) / sizeof(majorColor[0]);
size_t numberOfMinorColor = sizeof(minorColor) / sizeof(minorColor[0]);
size_t numberOfTotalColorPair = numberOfMajorColor * numberOfMinorColor;

size_t getMaxLengthOfString(const std::string colorList[]){
    size_t maxLengthColor = 0;
    for(size_t i = 0; i < 5; i++)
        if(maxLengthColor < colorList[i].length())
            maxLengthColor = colorList[i].length();
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

    size_t maxLengthMajorColor = getMaxLengthOfString(majorColor);
    size_t maxNumberOfDigits = std::to_string(numberOfTotalColorPair).size();

    for(int majorColorIndex = 0; majorColorIndex < numberOfMajorColor; majorColorIndex++) {
        for(int minorColorIndex = 0; minorColorIndex < numberOfMinorColor; minorColorIndex++) {
            std::cout << addNecessarySpacing(std::to_string((majorColorIndex * 5 + minorColorIndex) + 1), maxNumberOfDigits)
                      << addNecessarySpacing(majorColor[majorColorIndex], maxLengthMajorColor)
                      << minorColor[minorColorIndex] << "\n";
        }
    }
}

