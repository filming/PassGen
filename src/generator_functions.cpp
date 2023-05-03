#include <string>
#include <time.h>
#include "generator_functions.hpp"


std::string int_password(const int &password_length){
    srand(time(NULL));

    std::string password = "";

    for (int i = 0; i < password_length; i++){
        password += std::to_string(rand() % 10);
    }

    return password;
}

std::string alpha_password(const int &password_length){
	std::string password = "";

	srand(time(NULL));

	for (int i = 0; i < password_length; i++){
		int lower_upper_num = rand() % 10;

		if (lower_upper_num % 2 == 0){
			// uppercase
			int randnum = rand() % 26 + 65;
			password += char(randnum);

		} else {
			// lowercase
			int randnum = rand() % 26 + 97;
			password += char(randnum);
		}
	}

	return password;
}

std::string alnum_password(const int &password_length){
	srand(time(NULL));

	std::string password = "";

	for (int i = 0; i < password_length; i++){
		int num_letter = rand() % 10;

		if (num_letter % 2 == 0){
			// number
			int randnum = rand() % 9;
			password += std::to_string(randnum);

		} else {
			// letter
			int lower_upper_num = rand() % 10;

			if (lower_upper_num % 2 == 0){
				// uppercase
				int randnum = rand() % 26 + 65;
				password += char(randnum);

			} else {
				// lowercase
				int randnum = rand() % 26 + 97;
				password += char(randnum);
			}
		}
	}

	return password;
}

std::string intspecial_password(const int &password_length){
	srand(time(NULL));

	std::string password = "";

	for (int i = 0; i < password_length; i++){
		int num_special = rand() % 10;

		if (num_special % 2 == 0){
			// number
			int randnum = rand() % 9;
			password += std::to_string(randnum);

		} else {
			// special char
			bool is_valid_syllable = false;

			while (!is_valid_syllable){
				int randnum = rand() % 32 + 33;

				if (!(randnum > 47 && randnum < 59)){
					password += char(randnum);
					is_valid_syllable = true;
				}
			}
		}		
	}

	return password;
}

std::string alphaspecial(const int &password_length){
	srand(time(NULL));

	std::string password = "";

	for (int i = 0; i < password_length; i++){
		int num_letter = rand() % 10;

		if (num_letter % 2 == 0){
			// letter
			int lower_upper_num = rand() % 10;

			if (lower_upper_num % 2 == 0){
				// uppercase
				int randnum = rand() % 26 + 65;
				password += char(randnum);

			} else {
				// lowercase
				int randnum = rand() % 26 + 97;
				password += char(randnum);
			}

		} else {
			// syllable
			bool is_valid_syllable = false;

			while (!is_valid_syllable){
				int randnum = rand() % 32 + 33;

				if (!(randnum > 47 && randnum < 59)){
					password += char(randnum);
					is_valid_syllable = true;
				}
			}
		}		
	}

	return password;
}

std::string alnumspecial(const int &password_length){
	srand(time(NULL));

	std::string password = "";

	for (int i = 0; i < password_length; i++){
		int randnum = rand() % 9;

		if (randnum % 2 == 0){
			// letter or digit
			randnum = rand() % 9;

			if (randnum % 2 == 0){
				// uppercase or lowercase letter
				randnum = rand() % 9;
				if (randnum % 2 == 0){
					// uppercase
					int randnum = rand() % 26 + 65;
					password += char(randnum);

				} else {
					// lowercase
					int randnum = rand() % 26 + 97;
					password += char(randnum);
				}

			} else {
				// digit
				int randnum = rand() % 9;
				password += std::to_string(randnum);
			}

		} else {
			// special char
			bool is_valid_syllable = false;

			while (!is_valid_syllable){
				int randnum = rand() % 32 + 33;

				if (!(randnum > 47 && randnum < 59)){
					password += char(randnum);
					is_valid_syllable = true;
				}
			}
		}
	}

	return password;
}
