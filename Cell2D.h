#pragma once

#ifndef CELL2D_H
#define CELL2D_H

class Cell2D
{
protected:
	short _row;
	short _col;	

	Cell2D(const Cell2D& p2D) : _row(p2D._row), _col(p2D._col) {}

protected:
	Cell2D() : _row(0), _col(0) {}
	Cell2D(short row, short col) : _row(row), _col(col) {}

	inline void usetRow();
	inline void usetCol();

	inline void dsetRow();
	inline void dsetCol();

public:
	short getRow() const;
	short getCol() const;
}
;
#endif