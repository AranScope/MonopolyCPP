#ifndef monCard_H
#define monCard_H

#include <string>
	using std::string;
	
class monPlayer;

class monCard {
public:
	monCard(string name);
	void action(monPlayer* player);
	monCard* next_card();
private:
	string m_name;
	monCard* m_next_card;
};

#endif