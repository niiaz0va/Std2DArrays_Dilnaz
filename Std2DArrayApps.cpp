#include "Std2DArrays.h"
#include <iostream>
int main() {
	std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS> arr;
	int numberOfRows, numberOfColumns;
	std::cout << "Enter the number of rows:";
	std::cin >> numberOfRows;
	std::cout << "Enter the number of columns:";
	std::cin >> numberOfColumns;
	fillArray(arr, numberOfRows, numberOfColumns);
	printArray(arr, numberOfRows, numberOfColumns);
}