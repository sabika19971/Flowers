#pragma once
#include "pch.h"
#include "Person.h"
#include <iostream>
#include <vector>
#include <string>
#include "Florist.h"

#include "FlowersBouquet.h"
class Person
{
	private:
		string name;
	public:
		void orderFlowers(Florist* florist, Person* person, std::vector < std::string >);
		void acceptFlowers(FlowersBouquet*);
};

