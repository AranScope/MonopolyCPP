#ifndef monTile_H
#define monTile_H

#include <string>
	using std::string;

class monPlayer;
class monDeck;

class monTile {
	public:
		monTile(string name);
    //monTile(monTile * nextTile, monTile * prevTile);
		
		monTile* next_tile();
		monTile* prev_tile();
		
		string name();
		
		void set_next_tile(monTile* next_tile);
		void set_prev_tile(monTile* prev_tile);
		
		void set_name(string name);
		virtual void pass_action(monPlayer* player);
		virtual void stop_action(monPlayer* player);
		
		void print();
    
	protected:
	  monTile* m_nextTile;
	  monTile* m_prevTile;
	  string m_name;
};


class monPropertyTile: public monTile {
	public:
		monPropertyTile(string name/*, int cost, int mortgage_value, int house_cost*/);
		virtual void pass_action(monPlayer* player) override;
		virtual void stop_action(monPlayer* player) override;
    monPlayer* get_owner();
    
  private:
    monPlayer* m_owner;
    int m_cost;
    int m_mortgage_value;
    int m_house_cost;
    int m_number_of_houses;
};

class monUtilityTile: public monPropertyTile {
	public:
		monUtilityTile(string name);
};

class monStationTile: public monPropertyTile {
	public:
		monStationTile(string name);
};

class monCardTile: public monTile {
	public:
		monCardTile(string name, monDeck* deck);
		virtual void pass_action(monPlayer* player) override;
		virtual void stop_action(monPlayer* player) override;
	
	private:
		monDeck* m_deck;
};

class monGoTile: public monTile {
	public:
		monGoTile();
		virtual void pass_action(monPlayer* player) override;
		virtual void stop_action(monPlayer* player) override;
};

class monJailTile: public monTile {
	public:
		monJailTile();
		virtual void pass_action(monPlayer* player) override;
		virtual void stop_action(monPlayer* player) override;
};

class monTaxTile: public monTile {
	public:
		monTaxTile(string name, int amount);
		virtual void pass_action(monPlayer* player) override;
		virtual void stop_action(monPlayer* player) override;
  
  private:
    int m_amount;
};

#endif