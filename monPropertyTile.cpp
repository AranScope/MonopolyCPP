#include "monTile.h"
#include "monPlayer.h"
#include "iostream.h"

monPropertyTile::monPropertyTile(string name/*, int cost, int mortgage_value, int house_cost*/) : monTile(name)
{
  //m_owner = null;
  //m_cost = cost;
  //m_mortgage_value = mortgage_value;
  //m_house_cost = house_cost;
  //m_number_of_houses = 0;
}

void monPropertyTile::pass_action(monPlayer* player)
{
	cout << "monPropertyTile: Moving to " << m_name << endl;
}

void monPropertyTile::stop_action(monPlayer* player)
{
	cout << "monPropertyTile: Landed on " << m_name << endl;
  
  /*
  if(0)//owner == null)
  {
    cout << "Would you like to buy " << m_name << " for $" << m_cost << "? (y/n)" << flush;
    string result;
    cin >> result;
    if(result == "y")
    {
      cout << "Congrats." << endl;
    }
  }
  */
}

monPlayer* get_owner()
{
  return m_owner;
}