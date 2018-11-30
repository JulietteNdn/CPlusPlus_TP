#include "famille.hpp"

Mere::Mere(){
	cout << "Constructeur mère" << endl;
}

Mere::Mere(char * name) : nomMere(name) {
	cout << "Constructeur mère : " << nomMere << endl;
}

Mere::~Mere(){
	cout << "Destructeur mère" << endl;

}

char * Mere::getNomMere(){
	return nomMere;
}

Fille::Fille() : Mere () {
	cout << "Constructeur fille" << endl;
}

Fille::~Fille(){
	cout << "Destructeur fille" << endl;
}

Fille::Fille(char * nomF, char* nomM) : Mere(nomM), nomFille(nomF){
	cout << "Constructeur fille" << endl;
} 

char* Fille::getNomFille(){
	return nomFille;
}

int main(int, char**){
	
	Fille uneFille("Juliette","Isabelle");
	int nb;
	
	cout << "Nom de la fille : " << uneFille.getNomFille() << endl;
	cout << "Nom de la mère : " << uneFille.getNomMere() << endl;
	
	
	srand(time(NULL));
	nb = rand();
	
	cout << endl;
	cout << endl;
	cout << nb << endl;
	
	return 0;
}

