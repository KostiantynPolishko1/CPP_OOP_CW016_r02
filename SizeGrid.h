#pragma once

#ifndef SIZEGRID_H
#define SIZEGRID_H

class SizeGrid
{
protected:
	short _sizeRow;
	short _sizeCol;

	SizeGrid(const SizeGrid& sizeGrid) : _sizeRow(sizeGrid._sizeRow), _sizeCol(sizeGrid._sizeCol) {}

protected:
	SizeGrid() : _sizeRow(12), _sizeCol(12) {}
	SizeGrid(short sizeRow, short sizeCol) : _sizeRow(sizeRow), _sizeCol(sizeCol) {}

	short getSizeRow() const;
	short getSizeCol() const;
}
;
#endif