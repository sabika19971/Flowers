// #pragma once

#ifndef FLOWERSBOUQET_H_
#define FLOWERSBOUQET_H_

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class FlowersBouquet
{
private:
	vector<string> bouquet;
	bool is_arranged;

public:
	FlowersBouquet(vector<string> bouquetF);
	vector<string> GetBouquet();
	void arrange();
};
#endif