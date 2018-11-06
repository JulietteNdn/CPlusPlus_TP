#ifndef BHPP
#define BHPP

#include <iostream>

using namespace std;

class A; // "déclaration anticipée", "forward declaration"

class B 
{
	private:
		int j ;
		
	public:
		B(int=0);
		void exec(int);
		void send(A*);
	
};


#endif

