/* In designing a game, we decide we want to have monsters, because everyone 
   likes fighting monsters. Declare a struct that represents your monster. The
   monster should have a type that can be one of the following: an ogre, a 
   dragon, an orc, a giant spider, or a slime.

   Each individual monster should also have a name (use a std::string), as 
   well as an amount of health that represents how much damage they can take 
   before they die. Write a function named printMonster() that prints out all 
   of the struct’s members. Instantiate an ogre and a slime, initialize them 
   using an initializer list, and pass them to printMonster() */

#include <iostream>
#include <string>

enum MonsterType	{ // global namespace is fine here 
	ogre,
	dragon,
	orc,
	spider,
	slime,	
};

struct Monster	{
	std::string name;
	MonsterType type;
	int health; // could/should be unsigned, but don't wanna deal w overflow rn
};

std::ostream& operator<<(std::ostream& out, MonsterType monster)	{
	switch(monster)	{
		case ogre:
			out << "Ogre";
			break;
		case dragon:
			out << "Dragon";
			break;
		case orc:
			out << "Orc";
			break;
		case spider:
			out << "Giant spider";
			break;
		case slime:
			out << "Slime";
			break;
		default:
			out << "Unknown creature";
			break;
	}
	return out;
}


void printMonster(const Monster& monst)	{
	std::cout << "This " << monst.type << " is named " << monst.name
		<< " and has " << monst.health << " health.\n"; 
}

int main()	{
	Monster ogre1 {"Torg", ogre, 145 };
	printMonster(ogre1);
	Monster slime1 {"Blurp", slime, 23 };
	printMonster(slime1);
	return 0;
}
