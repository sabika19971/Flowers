#include "Person.h"
#include "Wholesaler.h"
#include "FlowersBouquet.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Wholesaler::Wholesaler(string name, Grower *growerG) : Person(name)
{
    grower = &(*growerG);
};
FlowersBouquet *Wholesaler::acceptOrder(vector<string> bouquet)
{
    cout << GetName() << "." << endl;
    cout << "Wholesaler " << GetName() << " forwards the request to Grower " << (*grower).GetName() << "." << endl;
    FlowersBouquet *myBouquet = (*grower).prepareOrder(bouquet);
    cout << GetName() << "." << endl;
    cout << "Wholesaler " << GetName() << " returns flowers to Florist ";
    return myBouquet;
};