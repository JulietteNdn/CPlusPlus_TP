template<typename TYPE>
PileGen<TYPE>::PileGen(): taille_(0), indiceFin_(0){}

template <typename TYPE>
PileGen<TYPE>::PileGen(int taille) : taille_(taille), indiceFin_(0) {
	
	if (taille_ < 1) // Une pile de moins d'1 élément ?
		throw invalid_argument("Erreur : Taille de la pile invalide");
		
	tab_ = new TYPE[taille_];
} 

template <typename TYPE>
PileGen<TYPE>::PileGen(const PileGen<TYPE> & unePile) : taille_(unePile.taille_) {
	tab_ = new TYPE[taille_];
	
	for (int i = 0; i < taille_; i++)
		tab_[i] = unePile.tab_[i];
}

template <typename TYPE>
PileGen<TYPE>::~PileGen(){
	
	delete [] tab_;
}

template <typename TYPE>
int PileGen<TYPE>::size(){
	return indiceFin_;
}

template <typename TYPE>
TYPE * PileGen<TYPE>::getTab_(){
	return tab_;
}


template <typename TYPE>
bool PileGen<TYPE>::empty() const {
	if (indiceFin_ == 0) return true;
	else return false;
}

template <typename TYPE>	
void PileGen<TYPE>::push(const TYPE &nouveau){
	if (indiceFin_ == taille_) // ça pose pb!
		throw out_of_range("Erreur : Pile pleine");
		
	tab_[indiceFin_] = nouveau;
	indiceFin_++;
	
}

template <typename TYPE>	
TYPE PileGen<TYPE>::pop(){
	if (empty())
		throw out_of_range("Erreur : Pile vide");
	
	indiceFin_--;
	
	return tab_[indiceFin_]; 
}

template <typename TYPE>	
const TYPE& PileGen<TYPE>::top() const{
	if (empty())
		throw out_of_range("Erreur : Pile vide");
		
	return tab_[indiceFin_-1];
}
	


template <typename TYPE>
PileGen<TYPE> & PileGen<TYPE>::operator=(const PileGen<TYPE> & unePile){
	if (this != &unePile) { //si ce n'est pas la même pile
		if (taille_ != unePile.taille_){
			taille_ = unePile.taille_;
			delete [] tab_ ;
			tab_ = new TYPE[taille_];
		}
		for (int i = 0; i < taille_; i++)
			tab_[i] = unePile.tab_[i];
	}
	return *this;
}



