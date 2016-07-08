#include "monDeck.h"
#include "monCard.h"
#include "iostream.h"
	
monDeck::monDeck()
{
}

bool monDeck::is_empty()
{
	return false;
}

monCard* monDeck::draw_card()
{
	monCard* top_card = m_top_card;
	m_top_card = m_top_card -> next_card();
	return top_card;
}

