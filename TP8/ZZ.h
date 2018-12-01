#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <iostream>
#include <iterator>
#include <string>
#include <cstdlib> 
#include <ctime>

using namespace std;

class ZZ {

  private :

   string nom_, prenom_;
   double note_;
   

  public :

   ZZ(string, string, double = 0.0);
   friend bool operator<(const ZZ &, const ZZ &);
   friend ostream & operator<<(ostream &, const ZZ &); //on le met en friend pour pas à avoir à construire les getteur de ZZ pour les notes & noms
   friend class CompareNote;
};

class CompareNote{
    public : 
        CompareNote(){}
        bool operator() (const ZZ& pelo1, const ZZ& pelo2){
            return pelo1.note_ < pelo2.note_ ;
        }
};

