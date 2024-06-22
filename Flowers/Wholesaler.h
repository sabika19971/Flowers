// #pragma once
#ifndef WHOLESALER_H_
#define WHOLESALER_H_
#include <iostream>
#include <vector>
#include "Person.h"
#include "Grower.h"
#include "FlowersBouquet.h"
using namespace std;
class Wholesaler : public Person
{
private:
	Grower *grower;

public:
	Wholesaler(string name, Grower *growerG);
	FlowersBouquet *acceptOrder(vector<string>);
};
#endif