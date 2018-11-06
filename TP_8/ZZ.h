#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <iostream>
#include <iterator>
#include <string>

using namespace std;

class ZZ {

  private :

   string nom_, prenom_;
   double note_;
   

  public :

   ZZ(string, string, double = 0.0);
   friend bool operator<(const ZZ &, const ZZ &);
   friend ostream & operator<<(ostream &, const ZZ &);
};

