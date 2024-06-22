#include "Florist.h"
#include "Person.h"
#include <iostream>
#include <vector>
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
using namespace std;
Florist::Florist(string name, Wholesaler *wholesaler, FlowerArranger *flowerArranger, DeliveryPerson *deliveryPerson) : Person(name)
{
    wholeSaler = &(*wholesaler);
    flowerarranger = &(*flowerArranger);
    deliveryperson = &(*deliveryPerson);
};

void Florist::acceptOrder(Person *person, vector<string> bouquet)
{
    cout << "Florist " << GetName() << " forwards request to Wholesaler ";
    FlowersBouquet *myBouquet = (*wholeSaler).acceptOrder(bouquet);
    cout << GetName() << "." << endl;
    cout << "Florist " << GetName() << " request flowers arrangement from Flower Arranger " << (*flowerarranger).GetName() << endl;
    (*flowerarranger).arrangeFlowers(myBouquet);
    cout << GetName() << "." << endl;
    cout << "Florist " << GetName() << " forwards flowers to Delivery Person " << (*deliveryperson).GetName() << endl;
    (*deliveryperson).deliver(person, myBouquet);
};
