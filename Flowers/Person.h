#ifndef PERSON_H_
#define PERSON_H_
// #include "Florist.h"
#include <iostream>
#include <vector>
#include <string>
#include "FlowersBouquet.h"
using namespace std;
class Florist;

class Person
{
private:
	string name;
	void ToStringBouquet(vector<string> bouquet);

public:
	Person(string nameP);
	string GetName();
	void orderFlowers(Florist *florist, Person *person, vector<string> bouquet);
	void acceptFlowers(FlowersBouquet *fb);
};

#endif