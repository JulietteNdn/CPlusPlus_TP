#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>
#include <stack>

using namespace std;

int main(int, char**){
	
	/** UN VECTEUR **/
	/*
	std::vector<int> Vec(10); //vecteur de taille 10
	std::vector<int>::iterator it; //iterateur de type int vector 
	
	cout << "Vecteur de taille : " << Vec.size() << endl;
	
	Vec = { 0,1,2,3,4,5,6,7,8,9 };
	
	for (it = Vec.begin(); it != Vec.end(); it++)
		cout << *it << " " ;
	
	cout << endl;
	Vec.push_back(10); // ajoute 10 en fin (donc augmente la taille egalemnt)
	Vec.push_back(11);
	Vec.push_back(12);

	Vec.pop_back(); // supprime le dernier élément
	cout << "Après insertion :" << endl;
	for (it = Vec.begin(); it != Vec.end(); it++)
		cout << *it << " " ;
	cout << " | Taille : "<< Vec.size() << endl;
	cout << "1er elmt : " << Vec.front() << " | Der elmt : " << Vec.back() << endl;
	
	*/
	
	/** UN AUTRE VECTEUR ! (à partir d'un fichier "vecteur.txt" **/
	/*
	int i=0, tailleVec;
	ifstream fichier;
	fichier.open("vecteur.txt");
	if(!fichier.fail()){
		fichier >> tailleVec;
		std::vector<int> Vec(tailleVec);
		while(!fichier.eof() && i<tailleVec){
			int lecture;
			fichier >> lecture;
			Vec[i] = lecture;
			i++;
		}
		std::vector<int>::iterator it; //iterateur de type int vector 	
		for (it = Vec.begin(); it != Vec.end(); it++)
			cout << *it << " " ;
			
		fichier.close();
	}
	* */
	
	/** UNE PILE ! **/
	std::stack<int> pile;
	int tab[] = {0, 1, 2, 3, 4, 5};
	
	for (int i = 0; i < 6 ; i++)
		pile.push(tab[i]);
	
	
	cout << "Taille de la pile: " << pile.size() << endl;
	
	cout << "Dépilons la pile ! "<< endl;
	
	while (!pile.empty()){
		cout << pile.top() << " " ;
		pile.pop();
	}
	
	cout << endl << "Taille de la pile: " << pile.size() << endl;	
	
	return 0;
}
