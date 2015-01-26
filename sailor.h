#ifndef SAILOR_H
#define SAILOR_H

class sailor
{
	public:
		int _alive;	//1 for alive 0 for dead

		char * _birthday;	//like "April 10, 1723" or something
		char * _name;	//like "John Silverboot"
		char * _duty;	//the captain, doctor, etc.  

		/*GETTERS*/
		int alive(){ return _alive;}
		char * birthday(){ return _birthday;}
		char * name(){ return _name;}
		char * duty(){ return _duty;}
};

#endif
