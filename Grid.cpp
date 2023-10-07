#include "Grid.h"

bool Grid::checkRAM(char** arr) const
{
	if (!arr) {
		//throw new std::runtime_error("no RAM available");
		return true;
	}
	return false;
}
;
bool Grid::checkRAM(char* arr) const
{
	if (!arr) {
		//throw new std::runtime_error("no RAM available");
		return true;
	}
	return false;
}
;
void Grid::cleanRAM(char** arr, short size)
{
	for (short i = 0; i <= size; i++) {
		if (arr[i]) {
			delete[] arr[i];
			arr[i] = nullptr;
		}
	}
	if (arr) {
		delete[] arr;
		arr = nullptr;
	}
}
;
char** Grid::getGrid() const{
	return _arrGrid;
}
;