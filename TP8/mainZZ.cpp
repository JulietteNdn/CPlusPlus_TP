#include "ZZ.h"

typedef std::vector<ZZ> vzz;


class Rand_0_100{
    public:
    Rand_0_100(int s){
        srand(s);
    }

    int operator() (){
        return rand()%100;
    }

};


class Fibo{
        int un1;
        int un2;
        int n;

    public:
        Fibo(): un1(0), un2(1), n(0){}
        int operator() (){
            int res;

            if (n==0) res = 0;
            else if (n==1) res = 1;
            else{
                res = un1+un2;
                un1 = un2;
                un2 = res;
            }
            n++;
            return res;
        }
};


int main(int, char **)
{
    Rand_0_100 graine(5);

    vzz zz;
    zz.push_back(ZZ("Margaux", "DARRAS", 20.0));
    zz.push_back(ZZ("Ygrette", "POUEDOGO", 13.0)); // pas en SDD... mais en TS
    zz.push_back(ZZ("MargauxMalade", "DARRAS", 19.5));
    zz.push_back(ZZ("LaGow", "DeYgrette", 11.5));

    priority_queue<ZZ> tri;
    priority_queue<ZZ, vector<ZZ>, CompareNote> tri_note;

    vzz::iterator it;

    for (it = zz.begin(); it != zz.end(); ++it)
    { // on insère les ZZ (qui sont ds le vecteur) dans la file à priorité
        tri.push(*it);
        tri_note.push(*it);
    }

    vzz zz2 = zz;

    while (!tri.empty())
    {                             // tq la file à prio n'est pas vide
        cout << tri.top() << endl; // on affiche en tête (dc croissant)
        tri.pop();
    }

    cout << endl;
    cout << endl;

    while (!tri_note.empty())
    {                                  // tq la file à prio n'est pas vide
        cout << tri_note.top() << endl; // on affiche en tête (dc croissant)
        tri_note.pop();
    }

    cout << endl;
    cout << endl;

    vector<int> mon_vecteur(50);

    generate(mon_vecteur.begin(), mon_vecteur.end(), graine);
    vector<int>::iterator itVec;
    for (itVec= mon_vecteur.begin(); itVec != mon_vecteur.end(); itVec++){
        cout << *itVec << endl;
    }

    cout << endl;
    cout << endl;
    
    vector<int> mon_vecteurFIBO(50);

    Fibo ptitFib;
    generate(mon_vecteurFIBO.begin(), mon_vecteurFIBO.end(), ptitFib);

    for (itVec= mon_vecteurFIBO.begin(); itVec != mon_vecteurFIBO.end(); itVec++){
        cout << *itVec << endl;
    }


}