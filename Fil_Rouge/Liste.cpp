#include "Liste.hpp"

Liste::Liste(){
	
	nbc_= 0;
	nbr_= 0;

}

void Liste::afficher(){
	
	
	// Affichage des cercles 
	for (int i = 0; i < nbc_; i++)
		cout << tabc_[i].toString() ;
	
	cout << endl;
	
	// Affichage des rectangles
	for (int i = 0; i < nbr_; i++)
		cout << tabr_[i].toString() ;
	
}

void Liste::ajouterCercle(Cercle &monCercle){
	
	tabc_[nbc_] = monCercle;
	nbc_++;
	
}


void Liste::ajouterRectangle(Rectangle &monRectangle){
	
	tabr_[nbr_] = monRectangle;
	nbr_++;
	
}


