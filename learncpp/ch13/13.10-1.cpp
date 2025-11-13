/* You are running a website, and you are trying to calculate your advertising 
   revenue. Write a program that allows you to enter 3 pieces of data:
		How many ads were watched.
		What percentage of users clicked on an ad.
		The average earnings per clicked ad.
   Store those 3 values in a struct. Pass that struct to another function that 
   prints each of the values. The print function should also print how much 
   you made for that day (multiply the 3 fields together). */


#include <iostream>

struct AdData	{
	int adsWatched {};
	float fracAdClicks {};
	int centsOnAdClick {};
};

void printAdData(AdData ad)	{
	using namespace std;
	// i'm way too lazy to use fixed-width text output
	cout<<"Ads watched:\t\t\t" << ad.adsWatched << endl;
	cout<<"Percentage of ads clicked:\t"<<ad.fracAdClicks*100<<"%"<<endl;
	cout<<"Average earnings per ad (c):\t" << ad.centsOnAdClick << endl;
	cout<<"Total earnings: $" <<  ad.adsWatched * ad.fracAdClicks 
		* ad.centsOnAdClick / 100 << endl;
}

int main()	{
	printAdData({ 7000, 0.875f, 25 });
	return 0;
}
