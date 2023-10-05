#pragma once

#ifndef CELLPRIZE_H
#define CELLPRIZE_H

#include "Cell2D.h"

class CellPrize final:
    public Cell2D
{
private:
    char _prize;

public:
    CellPrize() : _prize('x'), Cell2D() {}
    CellPrize(short row, short col, char prize) : _prize(prize), Cell2D(row, col) {}
    CellPrize(const CellPrize& prizeX) : _prize(prizeX._prize), Cell2D(prizeX._row, prizeX._col) {}

    char getPrize() const;
}
;
#endif