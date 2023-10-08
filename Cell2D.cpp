#include "Cell2D.h"

short Cell2D::getRow() const {
	return _row;
}
;
short Cell2D::getCol() const {
	return _col;
}
;
void Cell2D::setRow(const short step) {
	_row += step;
}
;
void Cell2D::setCol(const short step) {
	_col += step;
}
;