#include "Chaine.hpp"


Chaine::Chaine() : capacite_(-1), tab_(NULL){}

Chaine::Chaine(const char * maChaine) : capacite_(strlen(maChaine)){

	tab_ = (char *) malloc(capacite_*sizeof(char));
	strcpy(tab_,maChaine);
	
}

Chaine::Chaine(int taille) : capacite_(taille) {
	
	//try {
		tab_ = new char[capacite_];
		tab_[0] = '\0'; // chaine vide

	// } catch (std::bad_alloc &erreur)
}


Chaine::~Chaine() {
	delete [] tab_;
}


const char * Chaine::c_str() const{
	return tab_;
}

int Chaine::getCapacite() const {
	return capacite_;
}

Chaine::Chaine(const Chaine & chaine){
	capacite_ = chaine.capacite_;
	tab_ = new char[capacite_];
	strcpy(tab_,chaine.c_str());
}

void Chaine::afficher(std::ostream & flux) const{
		flux << c_str();
}

Chaine & Chaine::operator = (const Chaine & chaine){

	if (this != &chaine){
		if (capacite_ != chaine.capacite_){
			capacite_ = chaine.capacite_ ;
			delete [] tab_;
			tab_ = new char[capacite_];
		}
		 strcpy(this->tab_, chaine.c_str());
	}

	return *this;
}


char & Chaine::operator [] (int indice){

	if ( (indice <0) || (indice > capacite_) ) //Code qui pose problème
		throw std::out_of_range("erreur d'indexation");
		
		/*
	try{
		cout << "eh!" << endl;
		return tab_[indice];
		cout << "oooooh!" << endl;
	}catch(exception const& Excep){
		cout << "ERREUR: " << Excep.what() << endl;
		cout << "ohOHOHOHOHO!" << endl;
		throw;
	}
	* */
	/*try{
		cout << "eh!" << endl;
		return tab_[indice];
		cout << "oooooh!" << endl;
	}catch(const std::out_of_range& Excep){
		cout << "ERREUR: " << Excep.what() << endl;
		cout << "ohOHOHOHOHO!" << endl;
		throw;
	}*/
	
	 
}

char & Chaine::operator [] (int indice) const{ // la meme en lecture seule
	return tab_[indice];
}




/* opérateurs en dehors de la classe */

/*** Affichage en entier ***/ 
 ostream & operator << (ostream & flux, const Chaine & chaine){
	
	flux << chaine.c_str() ;
	
	return flux;
}


/*** Affichage ligne à ligne ***/
/*ostream & operator << (ostream & flux, const Chaine & chaine){
	for (int i = 0 ; i < chaine.getCapacite(); i++){
		flux << chaine[i] << endl;
	}
	
return flux;
*/
/*
Chaine operator + (const Chaine & c1, const Chaine & c2) {
	
	int taille = c1.getCapacite() + c2.getCapacite() -1 ;
	char * chaine  = new char[taille];
	
	// copie de c1
	strcpy(chaine, c1.c_str());
	
	//ajout de c2
	for (int i = 0 ; i < c2.getCapacite(); i++) // i demarre au '\0' de la chaine 1
		chaine.c_str()[c1.getCapacite()-1+i] = c2[i];
	
	return Chaine(chaine);
} 

*/


