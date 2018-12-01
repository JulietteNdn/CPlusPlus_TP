#include <iostream>

using namespace std;

class ZZ {
	private:
		string nom;
		string prenom;
		double note;
		
		
	public:
		ZZ();
		ZZ(string,string,double);
		ZZ(const ZZ &);
		~ZZ();
		
		ZZ & operator=(const ZZ &);
		
		string & getNom();
		string & getPrenom();
		double & getNote();
};
