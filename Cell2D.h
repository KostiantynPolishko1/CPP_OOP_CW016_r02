#pragma once

#ifndef CELL2D_H
#define CELL2D_H

class Cell2D
{
protected:
	short _row;
	short _col;	

	Cell2D(const Cell2D& p2D) : _row(p2D._row), _col(p2D._col) {}

	Cell2D() : _row(0), _col(0) {}
	Cell2D(short row, short col) : _row(row), _col(col) {}

	inline void setRow(const short step);
	inline void setCol(const short step);

public:
	short getRow() const;
	short getCol() const;
}
;
#endif