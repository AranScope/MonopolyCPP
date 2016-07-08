#ifndef monDice_H
#define monDice_H

#include <stdlib.h>
#include <tuple>
	using std::tuple;
	using std::get;
	
class monDice {
	public:
		tuple<int, int> roll_two();
		int roll_one();
		
	private:
};

#endif