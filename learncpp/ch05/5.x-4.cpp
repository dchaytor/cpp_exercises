/* write a program that asks for the name and age of two people,
 * then prints which person is older */

#include <iostream>
#include <string>

struct person {
	std::string name;
	uint16_t age; // uint8_t reads in as char
};

// this is dumb but w/e
std::string personInfo(person p)	{
	using namespace std::string_literals;
	return p.name + " (age: "s + std::to_string(p.age) + ")"s;
}

void printComparePerson(person& p1, person& p2)	{
	if (p1.age > p2.age)
		std::cout << personInfo(p1) << " is older than "
			<< personInfo(p2) << std::endl;
	else if (p2.age > p1.age)
		std::cout << personInfo(p2) << " is older than "
			<< personInfo(p1) << std::endl;
	else
		std::cout<<personInfo(p1) << " and " << personInfo(p2) 
			<< " are the same age" << std::endl;
}

void getInfo(person& p)	{
	std::cout << "Enter the name of a person: ";
	std::getline(std::cin >> std::ws, p.name);
	std::cout << "Enter that person's age: ";
	std::cin >> p.age;
}

int main()	{
	person p1 { };
	person p2 { };
	getInfo(p1);
	getInfo(p2);
	printComparePerson(p1, p2);

	return 0;
}
