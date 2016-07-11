#!/bin/sh
echo "Just doing it..."
cl -c -Z7 main.cpp &&
cl -c -Z7 monTile.cpp &&
cl -c -Z7 monPropertyTile.cpp &&
cl -c -Z7 monUtilityTile.cpp &&
cl -c -Z7 monStationTile.cpp &&
cl -c -Z7 monCardTile.cpp &&
cl -c -Z7 monGoTile.cpp &&
cl -c -Z7 monJailTile.cpp &&
cl -c -Z7 monTaxTile.cpp &&
cl -c -Z7 monDice.cpp &&
cl -c -Z7 monPlayer.cpp &&
cl -c -Z7 monDeck.cpp &&
cl -c -Z7 monCard.cpp &&
cl -c -Z7 monTaxCard.cpp &&
cl -c -Z7 monMoveCard.cpp &&
cl -c -Z7 monAdvanceToCard.cpp &&
lib -out:monopoly.lib main.obj monTile.obj monPropertyTile.obj monUtilityTile.obj monStationTile.obj monCardTile.obj monGoTile.obj monJailTile.obj monTaxTile.obj monDice.obj monPlayer.obj monDeck.obj monCard.obj monTaxCard.obj monMoveCard.obj monAdvanceToCard.obj&&
link -out:app.exe main.obj monopoly.lib