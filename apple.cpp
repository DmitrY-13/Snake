#include "apple.h"

Apple::Apple(int fieldWidth, int fieldHeight, std::vector<Point> occupied�ells)
{
	_fieldWidth = fieldWidth;
	_fieldHeight = fieldHeight;
	generateNew�oordinates(occupied�ells);
}

Point Apple::get�oordinates()
{
	return _apple�oordinates;
}

void Apple::generateNew�oordinates(std::vector<Point> occupied�ells)
{
TRY_GENERATE:
	_apple�oordinates.x = rand() % _fieldWidth;
	_apple�oordinates.y = rand() % _fieldHeight;
	for (Point cell : occupied�ells)
		if (_apple�oordinates == cell)
			goto TRY_GENERATE;
}
