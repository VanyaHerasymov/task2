#pragma once

#include <string>
#include <iostream>
using namespace std;
class Product
{
	string name;
	float price;
	float weight;
public:
	Product();
	Product(string name, float price, float weight);

	void setName(string Name);
	string getName()const;

	void setPrice(float price);
	float getPrice()const;

	void setWeight(float weight);
	float getWeight()const;

	void showProduct()const;
};

