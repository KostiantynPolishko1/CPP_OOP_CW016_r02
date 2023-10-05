#pragma once

#ifndef CELLBORDER_H
#define CELLBORDER_H

#include "Cell2D.h"

class CellBorder final:
    public Cell2D
{
private:
    char _borderH;
    char _borderV;

    CellBorder() : _borderH('A'), _borderV('1'), Cell2D() {}
    CellBorder(short row, short col, char borderH, char borderV) : _player(player), Cell2D(row, col) {}
    CellBorder(const CellPlayer& playerX) : _player(playerX._player), Cell2D(playerX._row, playerX._col) {}

    char getBorderH() const;
    char getBorderV() const;
}
;
#endif