#pragma once

#ifndef CELLBORDER_H
#define CELLBORDER_H

#include "Cell2D.h"

class CellBorder final:
    public Cell2D
{
private:
    char _borderE;//symbol in empty space
    char _borderHV;//symbol in horizontal and vertical line

    CellBorder(short row, short col, short borderHV, char borderE) : 
        Cell2D(row, col), _borderHV(borderHV), _borderE(borderE) {}

public:
    CellBorder() : Cell2D(), _borderHV('1'), _borderE('0') {}
    CellBorder(const CellBorder& borderX) : Cell2D(borderX._row, borderX._col), 
        _borderHV(borderX._borderHV), _borderE(borderX._borderE) {}

    char getBorderHV() const;
    char getBorderE() const;
}
;
#endif