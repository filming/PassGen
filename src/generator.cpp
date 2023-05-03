#include <iostream>
#include <string>
#include <time.h>
#include "generator_functions.hpp"


int main(){
	int password_length = 16;
	std::string password = alnumspecial(password_length);

	std::cout << password << "\n";
}
