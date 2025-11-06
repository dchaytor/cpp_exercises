/* Complete the following program by writing the isPrime() function using a 
   for-loop. When successful, the program will print “Success!”. */

// Make sure that assert triggers even if we compile in release mode
#undef NDEBUG

#include <cassert> // for assert
#include <iostream>

constexpr bool isPrime(unsigned int x)
{
	if (x < 2) return false;
	if (x <= 3) return true;	
	if (!(x % 2)) return false; // handle even number case
	
	int max = x / 3 + 1; // div2 case handled, +1 to handle trunc case
	for (unsigned int fac { 3 }; fac < max; fac += 2)	{
		if (!(x % fac)) return false;
	}
    return true; // hasn't returned yet; number must be prime
}

int main()
{
    assert(!isPrime(0)); // terminate program if isPrime(0) is true
    assert(!isPrime(1));
    assert(isPrime(2));  // terminate program if isPrime(2) is false
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!\n";

    return 0;
}
