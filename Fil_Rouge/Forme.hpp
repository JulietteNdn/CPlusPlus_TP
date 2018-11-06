#ifndef FORMEHPP
#define FORMEHPP

#include <iostream>
#include <string>
#include <sstream>
#include <string>

using namespace std;

#include "Point.hpp"
#include "Couleurs.hpp"


class Forme {

	protected:
		Point unPoint_;
		int w_;
		int h_;
		int id_;
		static int nbFormes_;
		COULEURS couleur_;
		int ordre_;
		
	public:
		Forme();
		Forme(int,int,int,int);
		Forme(Point, COULEURS);
		
		static int getNbFormes();
		Point& getPoint(); // pour modifier le point après un get, il faut mettre & car sinon ça ne renvoie que la copie !!!!
		int getLargeur();
		int getHauteur();
		
		COULEURS getCouleur();
		void setCouleur(COULEURS);
		
		static int prochainId(); 
		int getId();
		
		void setX(int x);
		void setY(int y);
		void setOrdre(int);
		
		virtual string toString() = 0;

	
};


#endif
