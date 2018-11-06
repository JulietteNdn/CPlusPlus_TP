#include "Rectangle.hpp"

Rectangle::Rectangle(){}


Rectangle::Rectangle( int x, int y, int w, int h ) : 
	Forme(x,y,w,h) {}


string Rectangle::toString(){
	
	stringstream sstream; // c'est un flux
	
	sstream << "Rectangle : coord (" << unPoint_.getX() << "," << unPoint_.getY() << "," << w_ << "," << h_ << ")";  
	
	return sstream.str();
	
}

