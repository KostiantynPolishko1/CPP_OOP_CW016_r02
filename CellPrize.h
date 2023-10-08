#pragma once

#ifndef CELLPRIZE_H
#define CELLPRIZE_H

#include "Cell2D.h"

class CellPrize:
    public Cell2D
{
protected:
    char _prize;

protected:
    CellPrize() : Cell2D(), _prize('&') {}

public:
    char getPrize() const;
}
;
#endif