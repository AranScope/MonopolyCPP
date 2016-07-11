#ifndef monCard_H
#define monCard_H

#include <string>
	using std::string;
	
class monPlayer;
class monTile;

class monCard {
public:
	monCard(string name);
	virtual void action(monPlayer* player);
	monCard* next_card();
	void set_next_card(monCard* monCard);
  string get_name();
protected:
	string m_name;
	monCard* m_next_card;
};

class monTaxCard: public monCard {
public:
	monTaxCard(string name, int amount);
	virtual void action(monPlayer* player) override;
protected:
	int m_amount;
};

class monMoveCard: public monCard {
public:
	monMoveCard(string name, int spaces);
	virtual void action(monPlayer* player) override;
protected:
	int m_spaces;
};

class monAdvanceToCard: public monCard {
public:
	monAdvanceToCard(string name, monTile* tile);
	virtual void action(monPlayer* player) override;
protected:
	monTile* m_tile;
};
#endif