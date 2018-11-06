#include <iostream>
#include <string>

using namespace std ;

class Bavarde {
  
  public:
  
  Bavarde(){
	nombre = 0;
	cout << "construction de " << nombre << endl;
  }
  
   Bavarde(int a){
	   nombre = a;
	   cout << "construction de " << a << endl;
	}
	
	//DESTRUCTEUR
	~Bavarde(){
		cout << "tais toi " << nombre << " ! " << endl;
	}
	
	int get() {
		return nombre ;	
	}
	
	void afficher() {
		
		cout << "Affichage de " << nombre << endl ;
	}
	
  private:
	int nombre;
  
} ;

//Ini
// Bavarde globale (2);

void fonction(Bavarde b) {
  cout << "code de la fonction";
}



class Couple {
	
	public:
		Couple(int a, int b) :
			pers2(b), pers1(a) {
				cout << "construction du couple" << endl;
		}
		
		~Couple() {
				cout << "destruction du couple" << endl;
		}
		
		int get1(){
			return pers1.get();
		}
		
		int get2(){
			return pers2.get();
		}
	
	private:
		Bavarde pers1 ;
		Bavarde pers2 ;
};



int main(int, char **)
{
	/*
	 * 
  Bavarde b;
  Bavarde * p = new Bavarde(3); // c'est un pointeur donc il faut le delete
  // la mémoire d'un pointeur se gère manuellement, les variables elles sont libérées
  // à la fin du programme

	delete(p);
	
	fonction(b);
	
	Bavarde h (8);
	cout << h.get() << endl;
	
	cout << Bavarde(0).get() << endl;
	* 
	*/


	/*
  const int TAILLE = 20;
  Bavarde   tab1[TAILLE];
  Bavarde * tab2 = new Bavarde[TAILLE];

  for (int i =0; i < TAILLE; ++i)
  {
     tab1[i].afficher();
     tab2[i].afficher();
  }
    */
    
    Couple couple (1,7) ;
    
    cout << couple.get1() << endl;
    cout << couple.get2() << endl;

  return 0;
}
