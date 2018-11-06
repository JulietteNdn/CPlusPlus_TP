#include "Forme.hpp"

Forme::Forme(): unPoint_(), w_(0), h_(0), id_(Forme::nbFormes_), couleur_(COULEURS::BLEU) {
	nbFormes_++;
}

Forme::Forme(int x, int y, int w, int h) : unPoint_(x,y), w_(w), h_(h), id_(Forme::nbFormes_), couleur_(COULEURS::BLEU) {
	nbFormes_++;
}

Forme::Forme(Point unPoint, COULEURS uneCouleur): unPoint_(unPoint), w_(0), h_(0), id_(Forme::nbFormes_), couleur_(uneCouleur) {
	nbFormes_++;
}

int Forme::getNbFormes(){
	return nbFormes_;
}

Point& Forme::getPoint(){
	
	return unPoint_;
}

COULEURS Forme::getCouleur(){
	return couleur_;
}

void Forme::setCouleur(COULEURS couleur){
	couleur_= couleur;
}

void Forme::setOrdre(int ordre){
	ordre_=ordre;
}


int Forme::prochainId(){
	return nbFormes_;
}

int Forme::getId(){
	return id_;
}

void Forme::setX(int x){
	unPoint_.setX(x);
}

void Forme::setY(int y){
	unPoint_.setY(y);
}

int Forme::getLargeur(){
	return w_;
}
int Forme::getHauteur(){
	return h_;
}


int Forme::nbFormes_ = 0;
