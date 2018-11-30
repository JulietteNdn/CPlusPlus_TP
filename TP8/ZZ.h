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
   friend ostream & operator<<(ostream &, const ZZ &);
   friend class CompareNote;
};

class CompareNote{
    public : 
        CompareNote(){}
        bool operator() (const ZZ& pelo1, const ZZ& pelo2){
            return pelo1.note_ < pelo2.note_ ;
        }
};

