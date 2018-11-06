#ifndef AHPP
#define AHPP

#include <iostream>

using namespace std;

class B; // "déclaration anticipée", "forward declaration"

class A 
{
	private:
		int i ;
	
	public:
		A(int=0);
		void exec(int);
		void send(B*);
	
};



#endif
