#ifndef monDeck_H
#define monDeck_H

class monCard;

class monDeck {
public:
	monDeck();
	monCard* draw_card();
	bool is_empty();
private:
	monCard* m_top_card;
};

#endif