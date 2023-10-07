#pragma once

#ifndef GRID_H
#define GRID_H

#include <iostream>
#include "SizeGrid.h"

class Grid final:
    public SizeGrid
{
private:
    char** _arrGrid;

    bool checkRAM(char** arr) const;
    bool checkRAM(char* arr) const;
    void cleanRAM(char** arr, short size);

    Grid(short sizeRow, short sizeCol) : SizeGrid(sizeRow, sizeCol) {
        _arrGrid = new char* [sizeRow];

        if (!checkRAM(_arrGrid))
            for (short i = 0; i < sizeRow; i++) {
                _arrGrid[i] = new char[sizeCol];
                if (checkRAM(_arrGrid[i])) {
                    cleanRAM(_arrGrid, i);
                    break;
                }
            }
    }

public:
    Grid() : SizeGrid() {
        _arrGrid = new char* [_sizeRow];

        if (!checkRAM(_arrGrid))
            for (short i = 0; i < _sizeRow; i++) {
                _arrGrid[i] = new char[_sizeCol];
                if (checkRAM(_arrGrid[i])) {
                    cleanRAM(_arrGrid, i);
                    break;
                }
            }
    }

    Grid(const Grid& gridX) : SizeGrid(gridX._sizeRow, gridX._sizeCol), _arrGrid(gridX._arrGrid) {}

    ~Grid()
    {
        if (_arrGrid){
            for (short i = 0; i < _sizeRow; i++) {
                if (_arrGrid[i]) {
                    delete[] _arrGrid[i];
                    _arrGrid[i] = nullptr;
                }
            }
            delete[] _arrGrid;
            _arrGrid = nullptr;
        }
    }

    char** getGrid() const;
}
;
#endif