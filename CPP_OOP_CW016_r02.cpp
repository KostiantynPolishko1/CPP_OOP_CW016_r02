#include "CellPlayer.h"
#include "Prize.h"
#include "CellTrack.h"
#include "CellBorder.h"
#include "Grid.h"
#include "OutPut.h"

int main()
{
	Grid grid;
	showGrid(grid.getGrid(), grid.getSizeRow(), grid.getSizeCol());

	Prize prize(grid);

	return 0;
}