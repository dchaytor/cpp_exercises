/* Create a class template named Triad that has 3 members of the same template 
   type. Also create a function template named print that can print a Triad. */

#include <iostream>


template <typename T>
struct Triad	{
	T t1;
	T t2;
	T t3;
};

template <typename T>
Triad(T, T, T)->Triad<T>;

template <typename T>
void print(const Triad<T>& tri)	{
	std::cout << "[" << tri.t1 << ", " << tri.t2 << ", " << tri.t3 << "]";
}

int main()	{
	Triad t1{ 1, 2, 3 }; // note: uses CTAD to deduce template arguments
	print(t1);

	Triad t2{ 1.2, 3.4, 5.6 }; // note: uses CTAD to deduce template arguments
	print(t2);
	std::cout << std::endl;

	return 0;
}
