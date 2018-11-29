#include "Point.hpp"

//Point::Point(){}
Point::Point(int x,int y) : x(x), y(y) {}
Point::Point(const Point &unPoint){
	
	x=unPoint.x;
	y=unPoint.y;
	
	cout << "Appel const par copie " << endl;
}

Point::~Point(){}

int Point::getX(){
	return x;	
}
int Point::getY(){
	return y;
}

void Point::setX(int x){
	this->x = x;
}

void Point::setY(int y){
	this->y = y;
}

void Point::setXY(int x, int y){
	this->x = x;
	this->y = y;
}



void Point::afficheCoord(){
	cout << "(x,y)=" << "(" << x << "," << y << ")" << endl;
	cout << endl;
}



int& Point::operator[] (char c){
	if (c=='x')
		return x;
	else if (c=='y')
		return y;
	else
		cout << "Erreur" << endl;
}


Point& Point::operator=(const Point & Copie){
	if (&Copie != this){
		x = Copie.x;
		y = Copie.y;
		cout << "Appel opérateur = " << endl;
	}
	return *this;
}

