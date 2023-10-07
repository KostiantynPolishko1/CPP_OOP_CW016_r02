#include "OutPut.h"

void showGrid(char** const arr, const short sizeRow, const short sizeCol, const char filler, const char separator)
{
	for (short i = 0; i < sizeRow; i++) {
		for (short j = 0; j < sizeCol; j++) {
			if (arr[i][j] == -51) {
				cout << filler << separator;
				continue;
			}
			cout << arr[i][j] << separator;
		}
		cout << "\n";
	}
}
;