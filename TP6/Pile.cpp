#include "Pile.hpp"

Pile::Pile(): taille_(0), indiceFin_(0){}

Pile::Pile(int taille) : taille_(taille), indiceFin_(0) {
	
	if (taille_ < 1) // Une pile de moins d'1 élément ?
		throw invalid_argument("Erreur : Taille de la pile invalide");
		
	tab_ = new int[taille_];
} 

Pile::Pile(const Pile & unePile) : taille_(unePile.taille_) {
	tab_ = new int[taille_];
	
	for (int i = 0; i < taille_; i++)
		tab_[i] = unePile.tab_[i];
}


Pile::~Pile(){
	
	delete [] tab_;
}


int Pile::size(){
	return indiceFin_;
}


int * Pile::getTab_(){
	return tab_;
}



bool Pile::empty() const {
	if (indiceFin_ == 0) return true;
	else return false;
}
	
void Pile::push(const int &nouveau){
	if (indiceFin_ == taille_) // ça pose pb!
		throw out_of_range("Erreur : Pile pleine");
		
	tab_[indiceFin_] = nouveau;
	indiceFin_++;
	
}
	
int Pile::pop(){
	if (empty())
		throw out_of_range("Erreur : Pile vide");
	
	indiceFin_--;
	
	return tab_[indiceFin_]; 
}
	
const int& Pile::top() const{
	if (empty())
		throw out_of_range("Erreur : Pile vide");
		
	return tab_[indiceFin_-1];
}
	



Pile & Pile::operator=(const Pile & unePile){
	if (this != &unePile) { //si ce n'est pas la même pile
		if (taille_ != unePile.taille_){
			taille_ = unePile.taille_;
			delete [] tab_ ;
			tab_ = new int[taille_];
		}
		for (int i = 0; i < taille_; i++)
			tab_[i] = unePile.tab_[i];
	}
	return *this;
}



