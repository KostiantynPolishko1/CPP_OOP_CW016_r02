#pragma once

#ifndef CELLPRIZE_H
#define CELLPRIZE_H

#include "Cell2D.h"

class CellPrize final:
    public Cell2D
{
private:
    char _prize;

    CellPrize(short row, short col, char prize) : Cell2D(row, col), _prize(prize) {}

public:
    CellPrize() : Cell2D(), _prize('x') {}
    CellPrize(const CellPrize& prizeX) : Cell2D(prizeX._row, prizeX._col), _prize(prizeX._prize) {}

    char getPrize() const;
}
;
#endif