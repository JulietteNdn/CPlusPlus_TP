#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>
#include <stdexcept>
#include <stdlib.h>
#include <cstring>
#include "Null_Pointer.hpp"


using namespace std;

class Chaine  {
	
	protected:
		
		int capacite_;
		char * tab_;
	
	public:
	
		Chaine();
		Chaine(const char *);
		Chaine(int);
		Chaine(const Chaine &);
		
		~Chaine();
		
		Chaine & operator = (const Chaine &);
		char & operator [] (int);
		char & operator [] (int) const;
		
		const char * c_str() const ;
		int getCapacite() const;
		void afficher(std::ostream &flux = std::cout) const;
		
		
		

};

// Chaine operator + (const Chaine &, const Chaine &);

/*** Affichage en entier ***/ 
 ostream & operator << (ostream &, const Chaine &);
/*** Affichage ligne à ligne ***/ 
// ostream & operator << (ostream &, const Chaine &);

#endif
