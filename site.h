#ifndef SITE_H
#define SITE_H

#include "siteEngine.h"

class site
{
	public:

	siteType * _type;	//what type of site this is, a trader, inn, enemy, treasure...

	/*GETTERS*/
	siteType * type(){ return _type;}
};

#endif
