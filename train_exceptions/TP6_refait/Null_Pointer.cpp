#include "Null_Pointer.hpp"

null_pointer::null_pointer() noexcept {
	const char * e = "Erreur de type null_pointer";
	erreur_ = e;
}

null_pointer::null_pointer(const string& message) noexcept : erreur_(message.c_str()) {}

null_pointer::null_pointer(const char* message) noexcept : erreur_(message){}


null_pointer::~null_pointer() noexcept{}

const char* null_pointer::what() noexcept{
	return erreur_;
}

