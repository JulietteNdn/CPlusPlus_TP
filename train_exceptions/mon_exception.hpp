#include <iostream>
#include <exception>

using namespace std;


class MonException : public exception {
	
	public:
		MonException() noexcept; //Cons par défaut
		
		//Cons par copie
		MonException(const MonException& excep) noexcept{
			e_numero = excep.e_numero;
			e_phrase = excep.e_phrase;
			e_niveau = excep.e_niveau;
		}
		
		//Cons ac param
		MonException(int num = 0, string const& s="", int lvl=0) noexcept
					: e_numero(num), e_phrase(s), e_niveau(lvl) {};
		
		//Destructeur
		~MonException() noexcept {};
		
		//
		const char * what() const noexcept{
			return e_phrase.c_str();
		}
		
		int getNiveau() const noexcept {
			return e_niveau;
		}

		
	private:
		int e_numero; //numéro de l'exception 
		string e_phrase; //description de l'exception
		int e_niveau; //niveau/hiérarchie de l'exception
};
