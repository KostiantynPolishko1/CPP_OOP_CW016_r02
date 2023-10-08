#include "CellPlayer.h"
#include "Prize.h"
#include "CellTrack.h"
#include "CellBorder.h"
#include "GameField.h"
#include "OutPut.h"

int main()
{

	GameField gameField;
	Prize prize(gameField);
	CellPlayer player;

	GameField gameField_c(player, prize);
	showGrid(gameField_c.getGrid(), gameField.getSizeRow(), gameField.getSizeCol());

	return 0;
}