// #pragma once
#ifndef DELIVERYPERSON_H_
#define DELIVERYPERSON_H_
#include "FlowersBouquet.h"
#include "Person.h"
class DeliveryPerson : public Person
{
public:
	DeliveryPerson(string name);
	void deliver(Person *p, FlowersBouquet *fb);
};
#endif