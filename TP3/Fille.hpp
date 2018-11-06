#ifndef FILLEHPP
#define FILLEHPP

#include <iostream>
#include "Mere.hpp"

using namespace std;

class Fille : public Mere
{
	public :
		Fille();
		Fille(string);
		~Fille();
		int getVal();
		void afficher();
	
	private :
	
	
};

#endif
