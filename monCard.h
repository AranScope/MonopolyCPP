#ifndef monCard_H
#define monCard_H

#include <string>
	using std::string;
	
class monPlayer;

class monCard {
public:
	monCard(string name);
	virtual void action(monPlayer* player);
	monCard* next_card();
	void set_next_card(monCard* monCard);
private:
	string m_name;
	monCard* m_next_card;
};

class monTaxCard: public monCard {
public:
	monTaxCard(string name, int amount);
	virtual void action(monPlayer* player) override;
private:
	int m_amount;
};
#endif