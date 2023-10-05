#pragma once

#ifndef CELLPLAYER_H
#define CELLPLAYER_H

#include "Cell2D.h"

class CellPlayer final:
    public Cell2D
{
private:
    char _player;

    CellPlayer(short row, short col, char player) : _player(player), Cell2D(row, col) {}

public:
    CellPlayer() : _player('x'), Cell2D() {}
    CellPlayer(const CellPlayer& playerX) : _player(playerX._player), Cell2D(playerX._row, playerX._col) {}

    char getPlayer() const;
}
; 
#endif