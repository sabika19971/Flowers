// #pragma once
#ifndef FLORIST_H_
#define FLORIST_H_
#include <iostream>
#include <vector>
#include "Person.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
// using namespace std;
class Florist : public Person
{
private:
	Wholesaler *wholeSaler;
	FlowerArranger *flowerarranger;
	DeliveryPerson *deliveryperson;

public:
	Florist(string name, Wholesaler *wholesaler, FlowerArranger *flowerArranger, DeliveryPerson *deliveryPerson);
	void acceptOrder(Person *person, vector<string> bouquet);
};
#endif