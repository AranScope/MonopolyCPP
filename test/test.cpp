#include "iostream.h";
#include <list>
#include <cmath>

int rollDice();
int rand(int min, int max);

class Space
{
  protected:
    std::string name;
    
  public:
    void setName(std::string _name){
      name = _name;
    }
};

class Board
{
  private:
    std::list<Space> spaces;
  
  public:
    Board(){
      spaces = {};
    }
    
    void addSpace(Space _space)
    {
        spaces.push_back(_space);
    }
};

class Property: Space
{
  private:
    int cost;
    int numberOfHouses;
    bool isMortgaged;
  public:
    Property(std::string _name, int _cost)
    {
      name = _name;
      cost = _cost;
      isMortgaged = false;
    }
    
    int mortgage()
    {
      if(!isMortgaged)
      {
        return cost/4;
      }
      else return 0;
    }
    
    int unMortgage()
    {
      return 0;
    }
};

class Player
{
  private:
    int money;
    std::list<Property> properties;
    
  public:
    Player()
    {
        money = 1500;
        properties = {};
    }
    
    int getMoney()
    {
      return money;
    }
    
    std::list<Property> getProperties()
    {
      return properties;
    }
    
    void addMoney(int _money)
    {
      money += _money;
    }
    
    void removeMoney(int _money)
    {
      money -= _money;
    }

    void addProperty(Property _property)
    {
      properties.push_back(_property);
    }
};




int main()
{
	for(int i = 0; i < 100; i++)
  {
    cout << rollDice() << endl;
  }
}

int rollDice(){
  return rand(1, 6);
}

/**
* Generate a random integer in a specified range.
* @param min the minimum value.
* @param max the maximum value.
* @return a random integer between min and max (inclusive).
*/
int rand(int min, int max)
{
  return min + (std::rand() % max);
}