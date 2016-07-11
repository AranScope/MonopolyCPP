#include "monDeck.h"
#include "monCard.h"
#include "iostream.h"
	
monDeck::monDeck(monCard* card)
{
	m_top_card = card;
  m_bottom_card = card;
}

bool monDeck::is_empty()
{
	return false;
}

monCard* monDeck::draw_card()
{
	cout << "monDeck: Drawing card " << (m_top_card->get_name()) << endl;
  monCard* top_card = m_top_card;
  add_card(top_card);
  m_top_card = m_top_card->next_card();
  return top_card;
}

void monDeck::add_card(monCard* card)
{
  m_bottom_card->set_next_card(card);
  m_bottom_card = card;
}