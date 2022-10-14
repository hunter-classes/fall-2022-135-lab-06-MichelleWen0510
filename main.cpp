#include <iostream>
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main()
{
	std::cout  << "Caesar Encrypt: Good morning! 5" << std::endl;
	std::cout << encryptCaesar("Good morning!", 5);
	std::cout << "" << std::endl;

	std::cout  << "Vigenere Encrypt: Good morning! cat" << std::endl;
        std::cout << encryptVigenere("Good morning!", "cat");
        std::cout << "" << std::endl;

	std:: cout << "Caesar Decrypt: " << std::endl;
	std::cout << decryptCaesar("Ltti rtwsnsl!", 5);
        std::cout << "" << std::endl;
	
	std::cout << "Vigenere Decrypt: " << std::endl;
	std::cout << decryptVigenere("Iohf mhtnbpg!", "cat");
        std::cout << "" << std::endl;
}
