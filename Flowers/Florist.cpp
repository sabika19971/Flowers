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
    if(person != NULL){
        cout << "Florist " << GetName() << " forwards request to Wholesaler "<<(*wholeSaler).GetName()<<endl;
        FlowersBouquet *myBouquet = (*wholeSaler).acceptOrder(bouquet);
        cout << "Wholesaler " << (*wholeSaler).GetName() << " returns flowers to Florist "<< GetName() << "." << endl;
        cout << "Florist " << GetName() << " request flowers arrangement from Flower Arranger " << (*flowerarranger).GetName() << endl;
        (*flowerarranger).arrangeFlowers(myBouquet);
        cout << "Flower Arranger " << (*flowerarranger).GetName() << " returns arranged flowers to Florist "<<GetName()<<endl;
        cout << "Florist " << GetName() << " forwards flowers to Delivery Person " << (*deliveryperson).GetName() << endl;
        (*deliveryperson).deliver(person, myBouquet);
    }
};
