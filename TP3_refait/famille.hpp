#pragma once
#include <iostream>
#include <time.h>

using namespace std;

class Mere {
	public:
		Mere();
		Mere(char*);
		~Mere();
		
		char* getNomMere();
		
	private:
		char * nomMere;
};

class Fille : public Mere{
	public:
		Fille();
		Fille(char*,char*);
		~Fille();
		
		char * getNomFille();
		
	private:
		char * nomFille;
};


