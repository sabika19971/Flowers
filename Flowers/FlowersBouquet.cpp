// #include "pch.h"
#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(vector<string> bouquetF)
{
    bouquet = bouquetF;
    is_arranged = false;
};
void FlowersBouquet::arrange()
{
    is_arranged = true;
};

vector<string> FlowersBouquet::GetBouquet(){
    return bouquet;
};