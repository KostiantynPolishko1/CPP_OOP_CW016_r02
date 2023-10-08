#pragma once

#ifndef CELLPLAYER_H
#define CELLPLAYER_H

#include "Cell2D.h"

class CellPlayer :
    public Cell2D
{
private:
    char _player;

    CellPlayer(short row, short col, char player) : Cell2D(row, col), _player(player) {}

public:
    CellPlayer() : Cell2D(), _player('x') {}
    CellPlayer(const CellPlayer& playerX) : Cell2D(playerX._row, playerX._col), _player(playerX._player) {}

    char getPlayer() const;
}
; 
#endif