/* Write a program that asks the user to enter their full name 
 * and their age. As output, tell the user the sum of their age 
 * and the number of characters in their name (use the 
 * std::string::length() member function to get the length of 
 * the string). For simplicity, count any spaces in the name as 
 * a character. */

#include <iostream>
#include <string>

int main()	{
	using namespace std::string_literals;
	std::cout << "Enter your full name: "s;
	std::string name;
	std::getline(std::cin, name);	

	std::cout << "Enter your age: "s;
	size_t age;
	std::cin >> age;

	std::cout << 
	  "Your age plus the length of your name (including spaces) is: "s << 
	  static_cast<size_t>(name.length()) + age << std::endl;

	return 0;
}
