// #include "pch.h"
#include "FlowerArranger.h"
#include "Person.h"
FlowerArranger::FlowerArranger(string name) : Person(name){};

void FlowerArranger::arrangeFlowers(FlowersBouquet *flowerBouqet)
{
    if(flowerBouqet != NULL){
        cout << "Flower Arranger " << GetName() << " arranges flowers." << endl;
        (*flowerBouqet).arrange();
    }
};
