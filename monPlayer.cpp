#include "monPlayer.h"
#include "monDice.h"
#include "monTile.h"
#include "iostream.h"

monPlayer::monPlayer(string name, monTile* startTilePointer, monDice* dicePointer)
{
	m_current_tile_pointer = startTilePointer;
	m_dice_pointer = dicePointer;
	m_money = 2500;
	m_name = name;
}

monTile* monPlayer::get_current_tile()
{
	return m_current_tile_pointer;
}

string monPlayer::get_name()
{
	return m_name;
}

void monPlayer::turn()
{	
	tuple<int, int> diceValues = m_dice_pointer -> roll_two();
	int value = get<0>(diceValues) + get<1>(diceValues);
	cout << "\nmonPlayer: Moving " << value << " spaces..." << endl;
	
	move_forward(value);
	
}

void monPlayer::add_money(int amount)
{
	m_money += amount;
}

void monPlayer::take_money(int amount)
{
	m_money -= amount;
}

void monPlayer::set_money(int amount)
{
	m_money = amount;
}

int monPlayer::get_money()
{
	return m_money;
}

void monPlayer::move_directly_to_tile(monTile* tile)
{
	m_current_tile_pointer = tile;
	m_current_tile_pointer->stop_action(this);
}

void monPlayer::move_to_tile(monTile* tile)
{
	do{
		m_current_tile_pointer = m_current_tile_pointer->next_tile();
		m_current_tile_pointer->pass_action(this);
	}while(m_current_tile_pointer != tile);
	
	m_current_tile_pointer->stop_action(this);
}

void monPlayer::move_forward(int amount)
{
	while(amount > 0)
	{
		amount -= 1;
		m_current_tile_pointer = m_current_tile_pointer->next_tile();
		m_current_tile_pointer->pass_action(this);
	}
	
	m_current_tile_pointer->print();
	m_current_tile_pointer->stop_action(this);
}

void monPlayer::move_backward(int amount)
{
	while(amount > 0)
	{
		amount -= 1;
		m_current_tile_pointer = m_current_tile_pointer->prev_tile();
	}
	
	m_current_tile_pointer->print();
	m_current_tile_pointer->stop_action(this);
}