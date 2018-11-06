#ifndef LISTEHPP
#define LISTEHPP

#define TAILLE 10

#include <iostream>
#include <string>
#include "Cercle.hpp"
#include "Rectangle.hpp"

using namespace std;

class Liste {
	
	public :
		
		Liste();
		void afficher();
		void ajouterCercle(Cercle &);
		void ajouterRectangle(Rectangle &);
	
	
	private :
		Cercle tabc_[TAILLE];
		Rectangle tabr_[TAILLE];
		
		int nbc_; // nb de cercles
		int nbr_; // nb de rectangles
};

#endif
