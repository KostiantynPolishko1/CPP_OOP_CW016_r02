#include "Prize.h"

short Prize::randCell(const short size, const short offset)
{
	srand(time(NULL));
	return offset + rand() % (size - offset * 2);
}
;