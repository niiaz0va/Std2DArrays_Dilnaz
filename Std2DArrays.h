#include <array>
const int MAXNUMBEROFROWS = 100;
const int MAXNUMBEROFCOLUMNS = 100;
void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int numberOfRows, int numberOfColumns);
void printArray(const std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int numberOfRows, int numberOfColumns);