#include "ZZ.hpp"

ZZ::ZZ(){}

ZZ::ZZ(string nom,string prenom,double note){
	this->nom = nom;
	this->prenom = prenom;
	this->note = note;
}
ZZ::ZZ(const ZZ & copain){
	nom = copain.nom;
	prenom = copain.prenom;
	note = copain.note;
}

ZZ::~ZZ(){}

ZZ & ZZ::operator=(const ZZ & copie){
	if (this != &copie){
		nom = copie.nom;
		prenom = copie.prenom;
		note = copie.note;
	}
	return *this;
}

string & ZZ::getNom(){
	return nom;
}

string & ZZ::getPrenom(){
	return prenom;
}

double & ZZ::getNote(){
	return note;
}
