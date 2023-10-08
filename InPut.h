#pragma once

#ifndef INPUT_H
#define INPUT_H

#include "GameField.h"
#include "CellPlayer.h"
#include "CellBorder.h";

class InPut final : 
	public CellPlayer
{
private:
	bool checkStep(const short *arr, const short playerStepRow, const short playerStepCol, const short sizeRow, const short sizeCol) const;

public:
	bool stepPlayer(short ind, CellPlayer& player, GameField& gameField, const CellBorder& border);
}
;
#endif