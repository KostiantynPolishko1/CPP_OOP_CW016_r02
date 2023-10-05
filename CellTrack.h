#pragma once

#ifndef CELLTRACK_H
#define CELLTRACK_H

#include "Cell2D.h"

class CellTrack final:
    public Cell2D
{
private:
    char _track;

    CellTrack(short row, short col, char track) : _track(track), Cell2D(row, col) {}

public:
    CellTrack() : _track('+'), Cell2D() {}
    CellTrack(const CellTrack& trackX) : _track(trackX._track), Cell2D(trackX._row, trackX._col) {}

    char getTrack() const;
}
;
#endif