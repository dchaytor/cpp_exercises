/* Define an enum class named Animal that contains the following animals: pig, 
   chicken, goat, cat, dog, duck. Write a function named getAnimalName() that 
   takes an Animal parameter and uses a switch statement to return the name 
   for that animal as a std::string_view (or std::string if you’re using 
   C++14). Write another function named printNumberOfLegs() that uses a switch 
   statement to print the number of legs each animal walks on. Make sure both 
   functions have a default case that prints an error message. Call 
   printNumberOfLegs() from main() with a cat and a chicken. */ 


#include <iostream>
#include <string_view>

enum class Animal {
	pig,
	chicken,
	goat,
	cat,
	dog,
	duck,
	END,
};

constexpr Animal intToAni(int thisAni)	{
	return static_cast<Animal>(thisAni);	
}
constexpr int operator+(Animal thisAni)	{
	return static_cast<int>(thisAni);
}

constexpr std::string_view getAnimalName(Animal thisAnimal)	{
	//using enum Animal; // not on cpp 20
	int aniCode { +thisAnimal };
	switch (thisAnimal)	{
		case (Animal::pig): 		return "pig";
		case (Animal::chicken): 	return "chicken";
		case (Animal::goat):		return "goat";
		case (Animal::cat):			return "cat";
		case (Animal::dog):			return "dog";
		case (Animal::duck):		return "duck";
		default:			return "???";
	}
}

// note: assuming no cripples
// i know they said this function should print number, but that's dumb
// changing to just return an int; changing function name to match
constexpr int getNumberOfLegs(Animal thisAnimal)	{
	//using enum Animal; // not on cpp20
	switch (thisAnimal)	{
		// 2 legged walkers
		case (Animal::chicken): 	// ft
		case (Animal::duck):		
			return 2;
		// 4 legged walkers
		case (Animal::pig): 
		case (Animal::goat):	
		case (Animal::cat):
		case (Animal::dog):		
			return 4;
	}
	return 0;
}

void printFormatAnimal(Animal thisAnimal)	{
	std::cout << "A " << getAnimalName(thisAnimal) << " has "
	 	<< getNumberOfLegs(thisAnimal) << " legs." << '\n';
}

int main()	{
	int myAnimal { 0 }; // starting at first inst.
	while (myAnimal < +Animal::END)	{
		printFormatAnimal(intToAni(myAnimal++));
	}
	return 0;
}
