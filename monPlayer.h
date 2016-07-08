#ifndef monPlayer_H
#define monPlayer_H

class monTile;
class monDice;

class monPlayer {
public:
	monPlayer(monTile* startTilePointer, monDice* dicePointer);
	monTile* get_current_tile();
	void turn();
	void give_money(int amount);
	void take_money(int amount);
	void set_money(int amount);
	void move_to_tile(monTile* tile);
	void move_forward(int amount);
	void move_backward(int amount);
	
private:
  int m_money;
  monTile* m_current_tile_pointer;
  monDice* m_dice_pointer;
};

#endif