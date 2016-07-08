#include "monDice.h"
#include "iostream.h"

int monDice::roll_one()
{
	return 1 + (rand() % 6);
}

tuple<int, int> monDice::roll_two()
{
	return tuple<int,int>(roll_one(), roll_one());
}