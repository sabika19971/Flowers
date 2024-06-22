// #pragma once
#ifndef GARDNER_H_
#define GARDNER_H_
#include "FlowersBouquet.h"
#include "Person.h"
using namespace std;
class Gardener : public Person
{
public:
	Gardener(string nameP);
	FlowersBouquet *prepareBouquet(vector<string> bouquet);
};

#endif