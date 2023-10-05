#pragma once

#ifndef CELLTRACK_H
#define CELLTRACK_H

#include "Cell2D.h"

class CellTrack final:
    public Cell2D
{
private:
    char _track;

    CellTrack(short row, short col, char track) : Cell2D(row, col), _track(track) {}

public:
    CellTrack() : Cell2D(), _track('+') {}
    CellTrack(const CellTrack& trackX) : Cell2D(trackX._row, trackX._col), _track(trackX._track) {}

    char getTrack() const;
}
;
#endif