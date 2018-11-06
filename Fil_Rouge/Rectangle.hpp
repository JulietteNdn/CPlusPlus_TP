#ifndef RECTANGLEHPP
#define RECTANGLEHPP

#include <iostream>
#include <string>
#include <sstream>

#include "Forme.hpp"

using namespace std;


class Rectangle : public Forme {
	
	public:
		
		Rectangle();
		Rectangle(int, int, int, int);
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
