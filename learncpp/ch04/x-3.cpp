/* 4.x-3: write a short program to simulate
 * a ball being dropped off a tower */

#include <iostream>
const double g {9.81}; 	// [m/s]

int main()	{
	double h0 {0};
	std::cout << "enter an initial height for the drop [m] ";
	std::cin >> h0;

	double h {h0};
	int t {0};
	while (h > 0)	{
		std::cout << "height at " << t << " seconds: ";
		std::cout << h << " [m]\n";
		t++;
		h = h0 - g * (t*t / 2.0); 
	}	

	std::cout << "the ball hits the ground at " << << " [s]\n";

	return 0;
}
