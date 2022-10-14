/*
Author: Michelle Wen
Course: CSCI-135
Instructor: Mike Zamansky
Assignment: Lab 6 Task A

Get word and return it's ascii
*/
#include <iostream>
#include <string>
#include "test-ascii.h"

int testascii(std::string words)
{
	char letter;
	for(int i=0;i<words.length();i++)
	{
		letter=words[i];
		std::cout << letter;
		std::cout << " "+std::to_string((int)letter) << std::endl;
	}
	return 0;
}
