#pragma once
#include "pch.h"
#include "Wholesaler.h"
#include <iostream>
#include <vector>
#include "Grower.h"
#include "FlowersBouquet.h"
class Wholesaler
{
private:
	Grower* grower;
public:
	FlowersBouquet* acceptOrder(std::vector < std::string >);
};

