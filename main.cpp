#include "iostream.h"
#include "monDice.h"
#include "monTile.h"
#include "monPlayer.h"
#include <thread>
#include <chrono>
#include <string>
	using std::string;
	
int main()
{
	monDice dice = monDice();
	monPropertyTile first = monPropertyTile("Go");
	monPropertyTile second = monPropertyTile("Old Kent Road");
	monTile third = monTile("Community Chest");
	monTile fourth = monTile("Whitechapel Road");
	monTile fifth = monTile("Income tax");
	
	first.set_next_tile(&second);
	first.set_prev_tile(&third);
	
	second.set_next_tile(&third);
	second.set_prev_tile(&first);
	
	third.set_next_tile(&fourth);
	third.set_prev_tile(&second);
	
	fourth.set_next_tile(&fifth);
	fourth.set_prev_tile(&third);
	
	fifth.set_next_tile(&first);
	fifth.set_prev_tile(&fourth);
	
	monPlayer player = monPlayer(&first, &dice);
	
	while(1){

		player.turn();
		std::this_thread::sleep_for(std::chrono::seconds(1));
		
	}
	
	return 0;
}

//change money
//advance to
//go back
//get out of jail