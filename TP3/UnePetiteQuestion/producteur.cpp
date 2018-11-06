#include "producteur.hpp"
#include <fstream>

using namespace std;

Producteur::Producteur() // Constructeur
{
	travail = 0 ;
}

bool Producteur::produire(int quantite, std::string nom) {
	
	ofstream fichier;
	
	fichier.open(nom.c_str());
	
	if (!fichier.fail()){
		fichier << "Nb d'éléments : " << quantite << endl;
		for (int i = 0; i < quantite; i++){
			fichier << i+1 << endl;
		} 
		
		fichier.close();
	}
	
	
	
	travail++;
	
	return 0;
}


int Producteur::getTravail(){
	return travail ;
}
