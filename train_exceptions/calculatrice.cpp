#include "mon_exception.hpp"
#include <stdexcept>
#include <vector>

using namespace std;


int division(int a, int b){
		if(b == 0)
		   throw MonException(1,"Division par zéro!!",2);

// s'arrête si l'exception est levée car le reste du code jusqu'au catch n'est pas exécuté.
		return a/b;

}




int main (int, char**){
	
	try{
		division(5,0);
	}catch(MonException const& E){
		cerr << "ERREUR : " << E.what() << endl;
	}
	
	int indice = -1;
	int tab_[5];
	
    try

    {

        vector<int> a(1000000000,1); //Un tableau bien trop grand

    }

    catch(exception const& e) //On rattrape les exceptions standard de tous types

    {

        cerr << "ERREUR : " << e.what() << endl; //On affiche la description de l'erreur
		throw;
    }
	
	catch(e){
		cout << "coucou" << endl;
	}
	
	return 0;
}
