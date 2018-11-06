#include "A.hpp"
#include "B.hpp"
#include "Mere.hpp"
#include "Fille.hpp"

int main(int, char**){
	
	/*
	Fille saFille("Isabelle");
	
	cout << Mere::getCompteur() << endl;
	cout << "Le nom de la mère est : " << saFille.getNom() << endl;
	
	saFille.afficher();
	*/
	
	Mere  *pm = new Mere("mere_dyn");
	Fille *pf = new Fille("fille_dyn");
	Mere  *pp = new Fille("fille vue comme mere");
	pm->afficher(); // affiche Mere
	pf->afficher(); // affiche Fille
	pp->afficher(); // affiche Fille
	
	return 0;
}
