#include "DeliveryPerson.h"
#include <iostream>
#include <vector>
#include "Person.h"
// #include "Florist.cpp"

using namespace std;

DeliveryPerson::DeliveryPerson(string name) : Person(name){};

void DeliveryPerson::deliver(Person *p, FlowersBouquet *fb)
{
    if(p!=NULL & fb!=NULL){
        cout << "Delivery Person " << GetName() << " delivers flowers " << (*p).GetName() << endl;
        (*p).acceptFlowers(fb);
    }
};
