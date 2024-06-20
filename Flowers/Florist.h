#pragma once
#include "pch.h"
#include "Florist.h"
#include <iostream>
#include <vector>
#include "Wholesaler.cpp"
#include "FlowerArranger.cpp"
#include "DeliveryPerson.h"
#include "Person.h"
class Florist
{
private:
	Wholesaler* wholeSaler;
	FlowerArranger* flowerArrager;
	DeliveryPerson* deliveryPerson;
public:
	void acceptOrder(Person*, std::vector < std::string >);
};

