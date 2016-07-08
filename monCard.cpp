#include "monCard.h"
#include "monPlayer.h"
#include "iostream.h"
	
monCard::monCard(string name)
{
	m_name = name;
}

monCard* monCard::next_card()
{
	return m_next_card;
}

void monCard::action(monPlayer* player)
{
}


