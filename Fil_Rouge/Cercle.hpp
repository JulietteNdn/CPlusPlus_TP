#ifndef CERCLEHPP
#define CERCLEHPP

#include <iostream>
#include <string>
#include <sstream>

#include "Forme.hpp"

using namespace std;


class Cercle : public Forme {
	
	public:
		
		Cercle();
		Cercle(int x, int y, int w, int h);
		Cercle(int x, int y, int rayon);
		
		void setRayon(int r);
		int getRayon();
	
		string toString();
		
		
	private:
	  /* Déjà hérités de Forme
		int x_;
		int y_;
		int w_;
		int h_;
	  */	
	//	int ordre_; mis dans Forme
};

#endif
