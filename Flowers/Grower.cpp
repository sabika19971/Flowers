#include "Grower.h"
#include "Person.h"
#include "Gardener.h"
using namespace std;

Grower::Grower(string name, Gardener *gardenerG) : Person(name)
{
    gardener = &(*gardenerG);
};

FlowersBouquet *Grower::prepareOrder(vector<string> bouquet)
{
    cout << "Grower " << GetName() << " forwards the request to Gardener " << (*gardener).GetName() << "." << endl;
    FlowersBouquet *myBouquet = (*gardener).prepareBouquet(bouquet);
    cout << GetName() << "." << endl;
    cout << "Grower " << GetName() << " returns flowers to Wholesaler ";
    return myBouquet;
};