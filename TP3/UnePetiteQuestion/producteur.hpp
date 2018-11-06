#ifndef __CPP3_PRODUCTEUR_HPP__
#define __CPP3_PRODUCTEUR_HPP__

#include <iostream>
using namespace std;

class Producteur {
	
	public:
		Producteur();
		bool produire(int, string);
		int getTravail();
		
	private:
		int travail;
};

#endif
