#include "Cercle.hpp"

Cercle::Cercle(): Forme(){}

Cercle::Cercle( int x, int y, int w, int h ) : 
	Forme(x,y,w,h) {}

Cercle::Cercle( int x, int y, int rayon ) : 
	Forme(x,y,rayon*2,rayon*2) {}
	
void Cercle::setRayon(int r){
	w_ = r*2;
	h_ = r*2;
}

int Cercle::getRayon(){
	return h_/2;
}

string Cercle::toString(){

	stringstream sstream; // c'est un flux
	
	sstream << "Cercle : coord (" << unPoint_.getX() << "," << unPoint_.getY() << "," << w_ << "," << h_ << ")";  
	
	return sstream.str();
}


