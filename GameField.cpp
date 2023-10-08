#include "GameField.h"

void GameField::fillGameField(const char borderE, const char borderHV)
{
    _arrGrid[0][0] = borderE;
    _arrGrid[0][_sizeCol - 1] = borderE;
    _arrGrid[_sizeRow - 1][_sizeCol - 1] = borderE;
    _arrGrid[_sizeRow - 1][0] = borderE;

    for (short i = 0; i < _sizeRow; i += _sizeRow - 1)
        for (short j = 1; j < _sizeCol - 1; j++) {
            _arrGrid[i][j] = borderHV + j;
        }

    for (short j = 0; j < _sizeCol; j += _sizeCol - 1)
        for (short i = 1; i < _sizeRow - 1; i++) {
            _arrGrid[i][j] = borderHV + i;
        }
}
;