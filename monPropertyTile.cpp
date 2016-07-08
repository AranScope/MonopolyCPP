#include "monTile.h"
#include "monPlayer.h"
#include "iostream.h"

monPropertyTile::monPropertyTile(string name) : monTile(name)
{
	
}

void monPropertyTile::pass_action(monPlayer* player)
{
	cout << "monPropertyTile: Passing " << m_name << endl;
}

void monPropertyTile::stop_action(monPlayer* player)
{
	cout << "monPropertyTile: Landed on " << m_name << endl;
}