#include "monDeck.h"
#include "monCard.h"
#include "iostream.h"
	
monDeck::monDeck(monCard* card)
{
	m_top_card = card;
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

void monDeck::add_card(monCard* card)
{
	card -> set_next_card(m_top_card);
	m_top_card = card;
}