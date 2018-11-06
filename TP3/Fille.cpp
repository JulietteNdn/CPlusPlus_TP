#include "Fille.hpp"

Fille::Fille():Mere() // Constructeur
{
	cout << "Construction de fille" << endl;
}

Fille::Fille(string NomMere):Mere(NomMere) // Constructeur
{
	
	cout << "Construction de fille" << endl;
}

Fille::~Fille() // Destructeur
{
	cout << "Destruction de fille" << endl;
}

void Fille::afficher()
{
	cout << "L'objet est de classe Fille" << endl;
}
