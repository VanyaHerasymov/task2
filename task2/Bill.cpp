#include "Bill.h"

Bill::Bill(Buy b):Buy(b)
{


}

void Bill::PrintBill() const
{
	ofstream file("Bill.txt");
	if (file.is_open()) {
		file << "product:" << getName() << endl;
		file << "price:" << getPrice() << endl;
		file << "weight: " << getWeight() << endl;
		file << "Amount: " << getAmount() << endl;
		file << "-------------------------------\n";
		file << "Total price: " << calcTotalPrice() << endl;
		file << "Total weight: " << calcTotalWeight() << endl;
	}
}
