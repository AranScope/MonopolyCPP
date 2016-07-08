#include "monTile.h"
#include "monPlayer.h"
#include "iostream.h"

monTile::monTile(string name)
{
	m_name = name;
}

monTile* monTile::next_tile()
{
	return m_nextTile;
}

monTile* monTile::prev_tile()
{
	return m_prevTile;
}

string monTile::name()
{
	return m_name;
}

void monTile::set_next_tile(monTile* nextTile)
{
	m_nextTile = nextTile;
}

void monTile::set_prev_tile(monTile* prevTile)
{
	m_prevTile = prevTile;
}

void monTile::set_name(string name)
{
	m_name = name;
}

void monTile::print()
{

}

void monTile::pass_action(monPlayer* player)
{
	
}

void monTile::stop_action(monPlayer* player)
{
	
}
