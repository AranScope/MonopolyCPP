#include "monPlayer.h"
#include "monDice.h"
#include "monTile.h"
#include "iostream.h"

monPlayer::monPlayer(monTile* startTilePointer, monDice* dicePointer)
{
	m_current_tile_pointer = startTilePointer;
	m_dice_pointer = dicePointer;
}

monTile* monPlayer::get_current_tile()
{
	return m_current_tile_pointer;
}

void monPlayer::turn()
{	
	tuple<int, int> diceValues = m_dice_pointer -> roll_two();
	int value = get<0>(diceValues) + get<1>(diceValues);
	cout << "\nmonPlayer: Moving " << value << " spaces..." << endl;
	
	move_forward(value);
	
	m_current_tile_pointer -> print();
	m_current_tile_pointer -> stop_action(this);
}

void monPlayer::change_money(int amount)
{
	m_money += amount;
}

void monPlayer::set_money(int amount)
{
	m_money = amount;
}

void monPlayer::move_to_tile(monTile* tile)
{
	m_current_tile_pointer = tile;
}

void monPlayer::move_forward(int amount)
{
	while(amount > 0)
	{
		amount -= 1;
		m_current_tile_pointer -> pass_action(this);
		m_current_tile_pointer = m_current_tile_pointer -> next_tile();
	}
}

void monPlayer::move_backward(int amount)
{
	while(amount > 0)
	{
		amount -= 1;
		m_current_tile_pointer -> pass_action(this);
		m_current_tile_pointer = m_current_tile_pointer -> prev_tile();
	}
}