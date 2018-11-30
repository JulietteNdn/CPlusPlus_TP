#include "Point.hpp"


ostream & operator<<(ostream & fichier, Point & unPoint){
	/*
	string coordonnees ;
	coordonnees = to_string(unPoint.getX())+ " " + to_string(unPoint.getY()) ;
	fichier << coordonnees.c_str();
	*/
	fichier << unPoint.getX() + unPoint.getY();
	return fichier;
}

int main(int, char**){
	

	Point p1;
	Point p2(1,9);
	
	p1 = p2;
	
	
	p1['y'] = 5;
	
	p1.setX(2);
	
	
	cout << p1['y'] << endl;
	
	p1.afficheCoord();
	p2.afficheCoord();
	
	
	cout << Point::getCompteur() << endl;
	
	
	
	int * p = new int;

   *p = 3;
   cout << *p << endl;
	
	
	return 0;
}
