#ifndef monDeck_H
#define monDeck_H

class monCard;

class monDeck {
public:
	monDeck(monCard* card);
	monCard* draw_card();
	bool is_empty();
	void add_card(monCard* card);
private:
	monCard* m_top_card;
};

#endif