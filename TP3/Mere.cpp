#include "Mere.hpp"

Mere::Mere() // Constructeur
{
	cout << "Construction de maman" << endl;
	Compteur ++;
}

Mere::Mere(string SonNom) : Nom(SonNom) // Constructeur
{
	cout << "Construction de maman" << endl;
	Compteur ++;
}

Mere::~Mere() // Destructeur
{
	cout << "Destruction de maman" << endl;
}

int Mere::Compteur = 0 ;

int Mere::getCompteur() 
{
	return Compteur;
}

string Mere::getNom()
{
	return Nom;
}

void Mere::afficher()
{
	cout << "L'objet est de classe Mere" << endl;
}
