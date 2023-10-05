#pragma once

#ifndef CELLBORDER_H
#define CELLBORDER_H

#include "Cell2D.h"

class CellBorder final:
    public Cell2D
{
private:
    char _borderE;//symbol in empty space
    short _borderHV;//symbol in horizontal and vertical line

    CellBorder(short row, short col, short borderHV, char borderE) : 
        _borderHV(borderHV), _borderE(borderE), Cell2D(row, col) {}

public:
    CellBorder() : _borderHV(0), _borderE(' '), Cell2D() {}
    CellBorder(const CellBorder& borderX) : _borderHV(borderX._borderHV), _borderE(borderX._borderE),
        Cell2D(borderX._row, borderX._col) {}

    char getBorderHV() const;
    char getBorderE() const;
}
;
#endif