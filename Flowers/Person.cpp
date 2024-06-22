#include "Person.h"
#include <iostream>
#include <vector>
#include "Florist.h"
#include "FlowersBouquet.h"
using namespace std;

Person::Person(string nameP)
{
	name = nameP;
};

string Person::GetName()
{
	return name;
};
void Person::orderFlowers(Florist *florist, Person *person, vector<string> bouquet)
{
	cout << GetName() << " orders flowers to " << (*person).GetName() << " from Florist " << (*florist).GetName() << ": ";
	ToStringBouquet(bouquet);
	(*florist).acceptOrder(person, bouquet);
};

void Person::acceptFlowers(FlowersBouquet *fb){
	cout<<GetName()<<" accepts the flowers: ";
	ToStringBouquet((*fb).GetBouquet());
};

void Person::ToStringBouquet(vector<string> bouquet){
for (auto i = bouquet.begin(); i != bouquet.end(); ++i)
	{
		cout << *i;
		if (i < bouquet.end() - 1)
		{
			cout << ", ";
		}
		else
		{
			cout << "." << endl;
		}
	}
};
