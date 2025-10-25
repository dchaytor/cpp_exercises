/* Write a file named constants.h that makes the following program run. If 
   your compiler is C++17 capable, use an inline constexpr variable. Else, 
   use a normal constexpr variable. maxClassSize should have value 35. */

#include "constants.h"
#include <iostream>

int main()
{
	std::cout << "How many students are in your class? ";
	int students{};
	std::cin >> students;


	if (students > Constants::maxClassSize)
		std::cout << "There are too many students in this class" << std::endl;
	else
		std::cout << "This class isn't too large" << std::endl;

	return 0;
}
