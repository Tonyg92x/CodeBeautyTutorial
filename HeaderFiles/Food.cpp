#include <iostream>
#include "Food.h"

const char* RecommendMeAFood(char firstLetter)
{
	if (firstLetter == 'a' || firstLetter == 'A')
		return "an apple.";
	else if (firstLetter == 'b' || firstLetter == 'B')
		return "a bannana.";
	else if (firstLetter == 'c' || firstLetter == 'c')
		return "chocolate cake.";
	else if (firstLetter == 'd' || firstLetter == 'd')
		return "doritos.";
	else return "pizza";
}

void GetPizzaRecipe()
{
	std::cout << "To make pizza you need...";
}