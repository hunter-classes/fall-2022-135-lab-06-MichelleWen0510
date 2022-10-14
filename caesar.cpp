/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 6 Task B

Shift the phrase.
*/
#include <iostream>
#include <string>
#include "caesar.h"

char shiftChar(char c, int rshift)
{
	char shifted;
	if(isupper(c))
	{
		shifted=char(int(c+rshift-65)%26+65);
	} else {
		shifted=char(int(c+rshift-97)%26+97);
	}
	return shifted;
}

std::string encryptCaesar(std::string plaintext, int rshift)
{
	std::string message;
	char letter;
	int check;
	for(int i=0;i<plaintext.length();i++)
	{
		letter=plaintext[i];
		check=(int)letter;
		if((check>=65 && check<=90) ||(check>=97 && check<=122))
		{  
			message=message+shiftChar(letter,rshift);
		} else {
			message=message+letter;
		}
	}
	return message;
}
