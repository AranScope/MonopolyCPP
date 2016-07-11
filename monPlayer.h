#ifndef monPlayer_H
#define monPlayer_H

#include <string>
	using std::string;

class monTile;
class monDice;

class monPlayer {
public:
	monPlayer(string name, monTile* startTilePointer, monDice* dicePointer);
	monTile* get_current_tile();
  int get_money();
  string get_name();
  
	void turn();
	void add_money(int amount);
	void take_money(int amount);
	void set_money(int amount);
	void move_to_tile(monTile* tile);
  void move_directly_to_tile(monTile* tile);
	void move_forward(int amount);
	void move_backward(int amount);
	
protected:
  int m_money;
  string m_name;
  monTile* m_current_tile_pointer;
  monDice* m_dice_pointer;
};

#endif