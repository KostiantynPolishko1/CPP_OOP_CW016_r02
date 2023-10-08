#pragma once

#ifndef GAMEFIELD_H
#define GAMEFIELD_H

#include "Grid.h"
#include "CellBorder.h"
#include "CellPlayer.h"
#include "Prize.h"

class GameField :
    public Grid
{
private:
    CellBorder border;
    void fillGameField(const char borderE, const char borderHV);

public:
    GameField() : Grid() 
    {
        fillGameField(border.getBorderE(), border.getBorderHV());       
    }

    GameField(const CellPlayer& player, const Prize& prize) : GameField()
    {
        _arrGrid[player.getRow() + 1][player.getCol() + 1] = player.getPlayer();
        _arrGrid[prize.getRow() + 1][prize.getCol() + 1] = prize.getPrize();
    }
}
;
#endif