#pragma once

#ifndef PRIZE_H
#define PRIZE_H

#include "Grid.h"
#include "CellPrize.h"
#include <time.h>

class Prize final:
	public CellPrize
{
private:
	//Grid grid;
	short randCell(const short size, const short offset = 4);

public:
	/*Prize() : CellPrize()
	{
		_row = randCell(grid.getSizeRow());
		_col = randCell(grid.getSizeCol());
	}*/

	Prize(short row, short col, char prize) : CellPrize(row, col, prize) 
	{
		_row = randCell(row);
		_col = randCell(col);
	}

	Prize(const Grid& grid) : CellPrize()
	{
		_row = randCell(grid.getSizeRow());
		_col = randCell(grid.getSizeCol());
	}

	Prize(const Grid& grid, const Prize& prizeX) : CellPrize(prizeX)
	{
		_row = randCell(grid.getSizeRow());
		_col = randCell(grid.getSizeCol());
	}
}
;
#endif