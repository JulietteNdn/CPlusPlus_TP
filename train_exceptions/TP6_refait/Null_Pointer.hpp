#ifndef CPP5__NULLP_HPP
#define CPP5__NULLP_HPP

#include <iostream>
#include <fstream>
#include <stdexcept>
#include <exception>

using namespace std;


class null_pointer : public logic_error {
	
	public:
	
		null_pointer() noexcept;
		null_pointer(const string& message) noexcept;
		null_pointer(const char *message) noexcept;
		
		~null_pointer() noexcept;
		const char* what() const noexcept;
		
	private:
	
		const char * erreur_;
		
};

#endif
