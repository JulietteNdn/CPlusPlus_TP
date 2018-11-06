#ifndef MEREHPP
#define MEREHPP

#include <iostream>
#include <string>

using namespace std;

class Mere
{
	public :
		Mere();
		Mere(string);
		~Mere();
		static int getCompteur();
		string getNom();
		virtual void afficher();
	
	private :
		static int Compteur ;
		string Nom;
	
	
};

#endif
