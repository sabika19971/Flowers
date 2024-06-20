#pragma once
#include "Gardener.h"
#include "FlowersBouquet.h"
class Grower
{
private:
	Gardener* gardener;
public:
	FlowersBouquet* prepareOrder(std::vector < std::string >);

};

