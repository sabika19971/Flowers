// #pragma once
#ifndef GROWER_H_
#define GROWER_H_
#include "Gardener.h"
#include "Person.h"
#include "FlowersBouquet.h"
using namespace std;

class Grower : public Person
{
private:
	Gardener *gardener;

public:
	Grower(string name, Gardener *gardener);
	FlowersBouquet *prepareOrder(vector<string> bouquet);
};

#endif