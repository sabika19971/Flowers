// main.cpp
#include <iostream>
#include "Person.h"
#include "Florist.h"
#include "Gardener.h"
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "Grower.h"
#include "DeliveryPerson.h"
#include <string>
using namespace std;
int main()
{
    //init the objects
    Person *chris = new Person("Chris");
    Person *robin = new Person("Robin");
    Gardener *garett = new Gardener("Garett");
    FlowerArranger *flora = new FlowerArranger("Flora");
    Grower *gary = new Grower("Gary", garett);
    Wholesaler *watson = new Wholesaler("Watson", gary);
    DeliveryPerson *dylan = new DeliveryPerson("Dylan");
    Florist *fred = new Florist("Fred", watson, flora, dylan);
    //create the requested flowers to the bouquet
    vector<string> mybouqet;
    mybouqet.push_back("Roses");
    mybouqet.push_back("Violets");
    mybouqet.push_back("Gladiolus");
    //order the flowers
    (*chris).orderFlowers(fred, robin, mybouqet);
    //clear the memory
    delete chris;
    delete robin;
    delete garett;
    delete flora;
    delete gary;
    delete watson;
    delete dylan;
    delete fred;
    return 0;
}
