/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 6 Task C

Shift the phrase according to a string.
*/
#include <iostream>
#include <string>
#include "vigenere.h"

std::string encryptVigenere(std::string plaintext, std::string keyword)
{
	char letter;
	int check, shift;
	std::string message;
	int position=0;
	int length=keyword.length();
	for(int i=0;i<plaintext.length();i++)
	{
		letter=plaintext[i];
		check=(int)letter;
		shift=25-(122-keyword[position]);
		if(check>=97 && check<=122)
		{
			message=message+char(int(letter+shift-97)%26+97);
			position++;
		} else if(check>=65 && check<=90) {
			message=message+char(int(letter+shift-65)%26+65);
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
