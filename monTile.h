#ifndef monTile_H
#define monTile_H

#include <string>
	using std::string;

class monPlayer;

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
		void pass_action(monPlayer* player);
		void stop_action(monPlayer* player);
		
		void print();
    
	protected:
	  monTile* m_nextTile;
	  monTile* m_prevTile;
	  string m_name;
};


class monPropertyTile: public monTile {
	public:
		monPropertyTile(string name);
};

class monUtilityTile: public monPropertyTile {
	public:
		monUtilityTile(string name);
};

class monStationTile: public monPropertyTile {
	public:
		monStationTile(string name);
};

#endif