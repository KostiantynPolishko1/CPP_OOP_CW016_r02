#include "InPut.h"

short arrStep[4][2] = { {1, 0}, {0, -1}, {-1, 0}, {0, 1} };
enum RowCol {
    ROW,
    COL
}
;
bool InPut::checkStep(const short *arr, const short playerStepRow, const short playerStepCol, const short sizeRow, const short sizeCol) const
{
    if (playerStepRow + arr[ROW] == sizeRow - 1 || playerStepRow + arr[ROW] == 0)
        return true;
    else if (playerStepCol + arr[COL] == sizeCol - 1 || playerStepRow + arr[COL] == 0)
        return true;
    return false;
}
;
bool InPut::stepPlayer(short ind, CellPlayer& player, GameField& gameField, const CellBorder& border)
{
    short playerStepRow = player.getRow();
    short playerStepCol = player.getCol();

    if (checkStep(arrStep[ind], playerStepRow, playerStepCol, gameField.getSizeRow(), gameField.getSizeCol())) {
        return false;
    }
    gameField.getGrid()[playerStepRow][playerStepCol] = border.getBorderE();
   
    player.setRow(arrStep[ind][ROW]);
    player.setCol(arrStep[ind][COL]);

    gameField.getGrid()[player._row][player._col] = player.getPlayer();
}
;