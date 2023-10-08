#pragma once

#ifndef PRIZE_H
#define PRIZE_H


#include "CellPrize.h"
#include "Grid.h"
#include <time.h>

class Prize final:
	public CellPrize
{
private:
	short randCell(const short size, const short offset = 4);

public:
	Prize(const Grid& gameField) : CellPrize()
	{
		_row = randCell(gameField.getSizeRow());
		_col = randCell(gameField.getSizeCol());
	}
}
;
#endif