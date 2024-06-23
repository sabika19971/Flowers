// #include "pch.h"
#include "Gardener.h"
#include "Person.h"
#include "FlowersBouquet.h"
using namespace std;
Gardener::Gardener(string nameP) : Person(nameP){};

FlowersBouquet *Gardener::prepareBouquet(vector<string> bouquet)
{
    cout<<"Gardener "<<GetName()<<" prepares flowers."<<endl;
    FlowersBouquet *fb = new FlowersBouquet(bouquet);
    (*fb).arrange();
    return fb;
};
