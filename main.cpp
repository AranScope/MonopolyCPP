#include "iostream.h"
#include "monDice.h"
#include "monTile.h"
#include "monPlayer.h"
#include "monCard.h"
#include "monDeck.h"
#include <thread>
#include <chrono>
#include <string>
	using std::string;
	
int main()
{
	monDice dice;
	
	monTaxCard card("Doctor's fees pay $50", -50);
  monDeck deck = monDeck(&card);
	
	
	monGoTile tile1;
	monPropertyTile tile2 ("Old Kent Road");
	monCardTile tile3 ("Community Chest", &deck); 
	monPropertyTile tile4 ("Whitechapel road");
	monTaxTile tile5 ("Income tax", 200);
	monStationTile tile6 ("Kings Cross Station");
	monPropertyTile tile7 ("The Angel, Islington");
	monCardTile tile8 ("Chance", &deck);
	monPropertyTile tile9 ("Euston Road");
	monPropertyTile tile10 ("Pentonville Road");
	monTile tile11 ("Just Visiting");
	monPropertyTile tile12 ("Pall Mall");
	monTile tile13 ("Electric Company");
	monPropertyTile tile14 ("Whitehall");
	monPropertyTile tile15 ("Northumbrl'd Avenue");
	monStationTile tile16 ("Marylebone Station");
	monPropertyTile tile17 ("Bow Street");
	monCardTile tile18 ("Community Chest", &deck);
	monPropertyTile tile19 ("Marlborough Street");
	monPropertyTile tile20 ("Vine Street");
	monTile tile21 ("Free Parking");
	monPropertyTile tile22 ("Strand");
	monCardTile tile23 ("Chance", &deck);
	monPropertyTile tile24 ("Fleet Street");
	monPropertyTile tile25 ("Trafalgar Square");
	monStationTile tile26 ("Fenchurch St. Station");
	monPropertyTile tile27 ("Leicester Square");
	monPropertyTile tile28 ("Coventry Street");
	monTile tile29 ("Water Works");
	monPropertyTile tile30 ("Piccadilly");
	monTile tile31 ("Go To Jail");
	monPropertyTile tile32 ("Regent Street");
	monPropertyTile tile33 ("Oxford Street");
	monCardTile tile34 ("Community Chest", &deck);
	monPropertyTile tile35 ("Bond Street");
	monStationTile tile36 ("Liverpool St. Station");
	monCardTile tile37 ("Chance", &deck);
	monPropertyTile tile38 ("Park Lane");
	monTaxTile tile39 ("Super Tax", 100);
	monPropertyTile tile40 ("Mayfair");
	

  tile1.set_next_tile(&tile2);
  tile1.set_prev_tile(&tile40);
  tile2.set_next_tile(&tile3);
  tile2.set_prev_tile(&tile1);
  tile3.set_next_tile(&tile4);
  tile3.set_prev_tile(&tile2);
  tile4.set_next_tile(&tile5);
  tile4.set_prev_tile(&tile3);
  tile5.set_next_tile(&tile6);
  tile5.set_prev_tile(&tile4);
  tile6.set_next_tile(&tile7);
  tile6.set_prev_tile(&tile5);
  tile7.set_next_tile(&tile8);
  tile7.set_prev_tile(&tile6);
  tile8.set_next_tile(&tile9);
  tile8.set_prev_tile(&tile7);
  tile9.set_next_tile(&tile10);
  tile9.set_prev_tile(&tile8);
  tile10.set_next_tile(&tile11);
  tile10.set_prev_tile(&tile9);
  tile11.set_next_tile(&tile12);
  tile11.set_prev_tile(&tile10);
  tile12.set_next_tile(&tile13);
  tile12.set_prev_tile(&tile11);
  tile13.set_next_tile(&tile14);
  tile13.set_prev_tile(&tile12);
  tile14.set_next_tile(&tile15);
  tile14.set_prev_tile(&tile13);
  tile15.set_next_tile(&tile16);
  tile15.set_prev_tile(&tile14);
  tile16.set_next_tile(&tile17);
  tile16.set_prev_tile(&tile15);
  tile17.set_next_tile(&tile18);
  tile17.set_prev_tile(&tile16);
  tile18.set_next_tile(&tile19);
  tile18.set_prev_tile(&tile17);
  tile19.set_next_tile(&tile20);
  tile19.set_prev_tile(&tile18);
  tile20.set_next_tile(&tile21);
  tile20.set_prev_tile(&tile19);
  tile21.set_next_tile(&tile22);
  tile21.set_prev_tile(&tile20);
  tile22.set_next_tile(&tile23);
  tile22.set_prev_tile(&tile21);
  tile23.set_next_tile(&tile24);
  tile23.set_prev_tile(&tile22);
  tile24.set_next_tile(&tile25);
  tile24.set_prev_tile(&tile23);
  tile25.set_next_tile(&tile26);
  tile25.set_prev_tile(&tile24);
  tile26.set_next_tile(&tile27);
  tile26.set_prev_tile(&tile25);
  tile27.set_next_tile(&tile28);
  tile27.set_prev_tile(&tile26);
  tile28.set_next_tile(&tile29);
  tile28.set_prev_tile(&tile27);
  tile29.set_next_tile(&tile30);
  tile29.set_prev_tile(&tile28);
  tile30.set_next_tile(&tile31);
  tile30.set_prev_tile(&tile29);
  tile31.set_next_tile(&tile32);
  tile31.set_prev_tile(&tile30);
  tile32.set_next_tile(&tile33);
  tile32.set_prev_tile(&tile31);
  tile33.set_next_tile(&tile34);
  tile33.set_prev_tile(&tile32);
  tile34.set_next_tile(&tile35);
  tile34.set_prev_tile(&tile33);
  tile35.set_next_tile(&tile36);
  tile35.set_prev_tile(&tile34);
  tile36.set_next_tile(&tile37);
  tile36.set_prev_tile(&tile35);
  tile37.set_next_tile(&tile38);
  tile37.set_prev_tile(&tile36);
  tile38.set_next_tile(&tile39);
  tile38.set_prev_tile(&tile37);
  tile39.set_next_tile(&tile40);
  tile39.set_prev_tile(&tile38);
	tile40.set_next_tile(&tile1);
  tile40.set_prev_tile(&tile39);
  
  monTaxCard card1 ("You have won second prize in a beauty contest, collect $10", 10);
	monTaxCard card2 ("Life insurance matures, collect $100", 100);
	monTaxCard card3 ("Bank error in your favour, collect $200", 200);
	monAdvanceToCard card4 ("Advance to go, collect $200", &tile1);
  monTaxCard card5 ("Holiday fund matures, receive $100", 100);
  monTaxCard card6 ("You inherit $100", 100);
	monTaxCard card7 ("Pay school fees of $50", -50);
	monTaxCard card8 ("Income tax refund collect $20", 20);
  monTaxCard card9 ("Pay hospital fees of $100", -100);
  monTaxCard card10 ("From sale of stock you get $50", 50);
  monTaxCard card11 ("Receive $25 consultancy fee", 25);
  
  monMoveCard card12 ("Go back three spaces", 3);
  monAdvanceToCard card13 ("Advance to Pall Mall, If you pass go collect $200", &tile12);
  monAdvanceToCard card14 ("Advance to Trafalgar Square, If you pass go collect $200", &tile25);
  monTaxCard card15 ("Your building loan matures, collect $150", 150);
  monAdvanceToCard card16 ("Advance to Mayfair", &tile40);
  monAdvanceToCard card17 ("Advance to go, collect $200", &tile1);
  monTaxCard card18 ("Bank pays you dividend of $50", 50);
  monAdvanceToCard card19 ("Take a trip to Kings Cross Station, if you pass go collect $200", &tile6);
  monTaxCard card20 ("Speeding fine $15", -15);
  
	deck.add_card(&card1);
	deck.add_card(&card2);
	deck.add_card(&card3);
	deck.add_card(&card4);
	deck.add_card(&card5);
	deck.add_card(&card6);
	deck.add_card(&card7);
	deck.add_card(&card8);
	deck.add_card(&card9);
	deck.add_card(&card10);
	deck.add_card(&card11);
	deck.add_card(&card12);
  deck.add_card(&card13);
  deck.add_card(&card14);
  deck.add_card(&card15);
  deck.add_card(&card16);
  deck.add_card(&card17);
  deck.add_card(&card18);
  deck.add_card(&card19);
  deck.add_card(&card20);
  
  monPlayer players [] = {
    monPlayer("Aran", &tile1, &dice),
    monPlayer("Paul", &tile1, &dice),
    monPlayer("Matt", &tile1, &dice),
    monPlayer("Hugh", &tile1, &dice)
  };
  
	while(1){
    for(monPlayer p: players){
      cout << endl << endl << p.get_name() << " is taking a turn..." << endl;
      p.turn();
      std::this_thread::sleep_for(std::chrono::seconds(1));
    }		
	}
	
	return 0;
}