/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 6 Task D

Decrypt both caesar and vignere.
*/
#include <iostream>
#include <string>
#include "decrypt.h"

char unshiftChar(char c, int rshift)
{
	char shifted;
	if(isupper(c))
	{
		shifted=char(int(c+(26-rshift)-65)%26+65);
	} else {
		shifted=char(int(c+(26-rshift)-97)%26+97);
	}
	return shifted;
}

std::string decryptCaesar(std::string ciphertext,int rshift)
{
	std::string message;
	char letter;
	int check;
	for(int i=0;i<ciphertext.length();i++)
	{
		letter=ciphertext[i];
		check=(int)letter;
		if((check>=65 && check<=90) ||(check>=97 && check<=122))
		{  
			message=message+unshiftChar(letter,rshift);
		} else {
			message=message+letter;
		}
	}
	return message;
}

std::string decryptVigenere(std::string ciphertext, std::string keyword)
{
	char letter;
	int check, shift;
	std::string message;
	int position=0;
	int length=keyword.length();
	for(int i=0;i<ciphertext.length();i++)
	{
		letter=ciphertext[i];
		check=(int)letter;
		shift=25-(122-keyword[position]);
		if(check>=97 && check<=122)
		{
			message=message+char(int(letter+(26-shift)-97)%26+97);
			position++;
		} else if(check>=65 && check<=90) {
			message=message+char(int(letter+(26-shift)-65)%26+65);
			position++;
		} else {
			message=message+letter;
		}
		if(position==length)
		{
			position=0;
		}
	}
	return message;
}
