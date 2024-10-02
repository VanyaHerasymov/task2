#include "Product.h"

Product::Product()
{
	name = "empty";
	price = 0;
	weight = 0;

}

Product::Product(string name, float price, float weight)
{
	this->name = name;
	this->price = price;
	this->weight = weight;

}

void Product::setName(string Name)
{
	Name = name;
}

string Product::getName() const
{
	return name;
}

void Product::setPrice(float price)
{
	this->price = price;

}

float Product::getPrice() const
{
	return price;
}

void Product::setWeight(float weight)
{
	this->weight = weight;

}

float Product::getWeight() const
{
	return weight;
}

void Product::showProduct() const
{
	cout << "product:" << name << endl;
	cout << "price:" << price << endl;
	cout << "weight: " << weight << endl;

}
