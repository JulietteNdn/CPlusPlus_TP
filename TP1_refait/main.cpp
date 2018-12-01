#include "Point.hpp"


ostream & operator<<(ostream & fichier, const Point &unPoint){
	/*
	string coordonnees ;
	coordonnees = to_string(unPoint.getX())+ " " + to_string(unPoint.getY()) ;
	fichier << coordonnees.c_str();
	*/
	// fichier << unPoint.getX() << " " << unPoint.getY() ; // si la fonction << n'est PAS amie de la classe Point
	fichier << unPoint.x << " " << unPoint.y ; // si la fonction << est amie de la classe Point
	return fichier;
}

int main(int, char**){
	

	Point p1;
	Point p2(1,9);
	
	p1 = p2;
	
	
	p1['y'] = 5;
	
	p1.setX(2);
	
	
	p1.afficheCoord();
	p2.afficheCoord();
	
	
	cout << Point::getCompteur() << endl;
	
	cout << p2 << endl;
	
	return 0;
}
