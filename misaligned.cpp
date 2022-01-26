#include <iostream>
#include <assert.h>
#include <string.h>

int getMaxLengthOfString(const char* colorList[]){
    int maxLengthColor = 0;
    for(size_t i = 0; i < 5; i++)
        if(maxLengthColor < strlen(colorList[i]))
            maxLengthColor = strlen(colorList[i]);
    return maxLengthColor;
}

std::string printWithSpacing(std::string colour, size_t length){
    std::string outputString = colour;
    size_t colourStringLength = colour.size();
    size_t extraSpacesToBeAdded = length - colourStringLength;
    for(size_t i = 0; i <= extraSpacesToBeAdded; i++){
        outputString += " ";
    }
    outputString += "| ";
    return outputString;
}

int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate", "Purple"};
    int maxLengthMajorColor = getMaxLengthOfString(majorColor);

    size_t totalColourPair = sizeof(majorColor)/sizeof(majorColor[0]) * sizeof(minorColor)/sizeof(minorColor[0]);
    size_t maxNumberOfDigits = std::to_string(totalColourPair).size();
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            std::cout << printWithSpacing(std::to_string(i * 5 + j) , maxNumberOfDigits)
                      << printWithSpacing(majorColor[i] , maxLengthMajorColor)
                      << minorColor[i] << "\n";
        }
    }
    return i * j;
}

int main() {
    const char* majorColourTestList[] = {"Magenta", "Cyan", "Grey", "Orange", "Purple"};
    int result = printColorMap();
    std::string outputString = printWithSpacing("Red" , 5);
    int lengthOfLongest = getMaxLengthOfString(majorColourTestList);
    assert(lengthOfLongest == 7);
    assert(outputString.size() == 8);
    assert(outputString[-2] = '|');
    assert(result == 26);
    std::cout << "All is well (maybe!)\n";
    return 0;
}