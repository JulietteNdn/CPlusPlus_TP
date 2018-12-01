#include "ZZ.hpp"

bool operator<(ZZ etu1, ZZ etu2) { //note
	return (etu1.getNote() < etu2.getNote()) ;
}

ostream& operator<<(ostream &fichier, ZZ etu){
	fichier << etu.getPrenom() << " " << etu.getNom() 
			<< ", Moyenne : " << etu.getNote() << endl; 
}
int main(int, char**){
	
	ZZ etudiant1("Naudin","Juliette",19.8);
	ZZ etudiant2("Darras","Margaux",20);
	
	cout << etudiant1 << etudiant2 << endl;
	
	return 0;
}
