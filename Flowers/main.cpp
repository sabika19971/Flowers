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
    std::cout << "Hello World!" << std::endl;
    Person *chris = new Person("Chris");
    Person *robin = new Person("Robin");
    Gardener *garett = new Gardener("Garett");
    FlowerArranger *flora = new FlowerArranger("Flora");
    Grower *gary = new Grower("Gary", garett);
    Wholesaler *watson = new Wholesaler("Watson", gary);
    DeliveryPerson *dylan = new DeliveryPerson("Dylan");
    Florist *fred = new Florist("Fred", watson, flora, dylan);
    vector<string> mybouqet;
    mybouqet.push_back("Roses");
    mybouqet.push_back("Violets");
    mybouqet.push_back("Gladiolus");

    (*chris).orderFlowers(fred, robin, mybouqet);

    // FlowersBouquet *floe=(*g).prepareOrder(mybouqet);
    // FlowersBouquet *floe=(*watson).acceptOrder(mybouqet);
    // (*flora).arrangeFlowers((*garett).prepareBouquet(mybouqet));
    // Florist *fred = new Florist("Fred", "kkj");
    return 0;
}
