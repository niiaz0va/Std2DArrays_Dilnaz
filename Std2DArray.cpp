#include "Std2DArrays.h"
#include <iostream>
void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int numberOfRows, int numberOfColumns) {
    if (numberOfRows > MAXNUMBEROFROWS || numberOfColumns > MAXNUMBEROFCOLUMNS) {
        throw std::invalid_argument("Incorrect number of rows or columns");
    }

    int startValue = 1;
    for (int i = numberOfRows - 1; i >= 0; i--) {  
        if ((numberOfRows - i - 1) % 2 == 0) {     
            for (int j = 0; j < numberOfColumns; j++) {
                arr[i][j] = startValue;
                startValue++;
            }
        }
        else {
            for (int j = numberOfColumns - 1; j >= 0; j--) {
                arr[i][j] = startValue;
                startValue++;
            }
        }
    }
}
void printArray(const std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int numberOfRows, int numberOfColumns) {
    if (numberOfRows > MAXNUMBEROFROWS || numberOfColumns > MAXNUMBEROFCOLUMNS) {
        throw std::invalid_argument("incorrect");
    }
    for (int i = 0; i < numberOfRows; i++) {
        for (int j = 0; j < numberOfColumns; j++) {
            std::cout << arr[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}
