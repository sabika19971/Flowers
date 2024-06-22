// #include "pch.h"
#include "FlowerArranger.h"
#include "Person.h"
FlowerArranger::FlowerArranger(string name) : Person(name){};

void FlowerArranger::arrangeFlowers(FlowersBouquet *flowerBouqet)
{
    cout << "Flower Arranger " << GetName() << " arranges flowers." << endl;
    (*flowerBouqet).arrange();
    cout << "Flower Arranger " << GetName() << " returns arranged flowers to Florist ";
};
