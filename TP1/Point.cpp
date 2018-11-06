#include "Point.hpp"

int Point::getX() {
  return x;
}

void Point::setX(int new_x) {
	x = new_x;
}

int Point::getY() {
  return y;
}

void Point::setY(int new_y) {
	y = new_y;
}

void Point::DeplacerDe(int x, int y) {
	this->x += x;
	this->y += y;
}

void Point::DeplacerVers(int x, int y) {
	setX(x);
	setY(y);
}

// Constructeur
Point::Point(int a, int b) {
	x = a;
	y = b;
	++compteur;
}

Point::Point(){
	x = 0 ;
	y = 0 ;
	++compteur;
}

// initialisation des attributs de classe (variables statiques)
int Point::compteur = 0 ;

int Point::getCompteur(){
	
	return compteur ;
}
