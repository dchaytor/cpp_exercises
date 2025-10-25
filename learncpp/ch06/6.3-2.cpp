/* Write a program that asks the user to input an integer, and tells the user 
   whether the number is even or odd. Write a constexpr function called 
   isEven() that returns true if an integer passed to it is even, and false 
   otherwise. Use the remainder operator to test whether the integer parameter 
   is even. Make sure isEven() works with both positive and negative numbers */

#include <iostream>

constexpr bool isEven(int input)	{
	return !(input % 2);
}

int main()	{
	std::cout << "Enter a number to compute if it's even or odd: ";
	int input {};
	std::cin >> input;
	std::cout << "The number " << input << " is " 
		<< (isEven(input) ? "even\n" : "odd\n");

	return 0;
}
