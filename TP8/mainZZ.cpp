#include "ZZ.h"

typedef std::vector<ZZ>  vzz;


int main(int, char **){
 vzz zz;

 zz.push_back(ZZ("Margaux", "DARRAS", 20.0));
 zz.push_back(ZZ("Ygrette", "POUEDOGO", 13.0)); // pas en SDD... mais en TS
 zz.push_back(ZZ("MargauxMalade", "DARRAS", 19.5));
 zz.push_back(ZZ("LaGow", "DeYgrette", 11.5));


priority_queue<ZZ> tri;

vzz::iterator it ;

for (it = zz.begin(); it != zz.end(); ++it){ // on insère les ZZ (qui sont ds le vecteur) dans la file à priorité
    tri.push(*it);
}

while (!tri.empty()){ // tq la file à prio n'est pas vide
    cout << tri.top() << " "; // on affiche en tête (dc croissant)
    tri.pop();
}

cout << endl;

}