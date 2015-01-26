#include "sailor.h"
#include "ship.h"
#include "island.h"
#include "site.h"
#include "siteEngine.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;

int main()
{
	ship * playerShip = new ship();

	cout << "Size of player ship's crew: " << playerShip->theCrew()->size() <<'\n';
	cout << "Health of the player ship: " << playerShip->health() << '\n';

	return 0;
}
