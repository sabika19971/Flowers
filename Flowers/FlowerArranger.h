// #pragma once
// #include <iostream>
// #include <vector>
// #include <string>
#ifndef FLOWERARRANGER_H_
#define FLOWERARRANGER_H_
#include "Person.h"
#include "FlowersBouquet.h"
class FlowerArranger : public Person
{
public:
	FlowerArranger(string name);
	void arrangeFlowers(FlowersBouquet *flowerBouqet);
};
#endif