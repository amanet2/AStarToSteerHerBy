#ifndef SHIP_H
#define SHIP_H

#include <stdlib.h>
#include "sailor.h"
#include <vector>

class ship
{
	public:
		
		std::vector<sailor*> * _theCrew;	//all sailors on the ship
		
		int _health;	//the state of the ship's wellbeing

		/*GETTERS*/
		std::vector<sailor*> * theCrew(){ return _theCrew;}
	
		int health(){ return _health;}

		/*CONSTRUCTOR*/
		ship()
		{
			_theCrew = (std::vector<sailor*> *)malloc(sizeof(std::vector<sailor*>));
			_health = 100;
		}
};

#endif
