#include "monCard.h"
#include "monPlayer.h"
#include "iostream.h"
	
monCard::monCard(string name)
{
	m_name = name;
	m_next_card = 0;
}

monCard* monCard::next_card()
{
	return m_next_card;
}

void monCard::action(monPlayer* player)
{
}

void monCard::set_next_card(monCard* card)
{
	m_next_card = card;
}

string monCard::get_name()
{
  return m_name;
}

