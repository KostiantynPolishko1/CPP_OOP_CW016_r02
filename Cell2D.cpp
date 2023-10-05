#include "Cell2D.h"

short Cell2D::getRow() const {
	return _row;
}
;
short Cell2D::getCol() const {
	return _col;
}
;
void Cell2D::usetRow() {
	_row++;
}
;
void Cell2D::usetCol() {
	_col++;
}
;
void Cell2D::dsetRow() {
	_row--;
}
;
void Cell2D::dsetCol() {
	_col--;
}
;