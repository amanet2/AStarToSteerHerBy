#ifndef ISLAND_H
#define ISLAND_H

#include "site.h"
#include <vector>

class island
{
	public:

		std::vector<site*> * _interactives;	//a site is something like a merchant, inn, pirate clan, etc.

		/*GETTERS*/
		std::vector<site*> * interactives(){ return _interactives;}
};

#endif
