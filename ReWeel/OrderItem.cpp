
#include "OrderItem.h"

OrderItem::OrderItem(int index, int qty) 
{
	itemIndex = index;
	quantity = qty;
}

void OrderItem::displayOrderItem(vector<DrinkItem> & drinks)
{
	DrinkItem drinkitem = drinks[itemIndex - 1];
	cout << "You order drinks is : " << drinkitem.getName() << " " << drinkitem.getSize() << 
		" " << quantity << " cops¡Aones " << drinkitem.getPrice()<<"NTD, Total " << drinkitem.getPrice() * quantity << "NTD" << endl;
}

int OrderItem::getIndex()
{
	return itemIndex;

}

int OrderItem::getQuantity()
{
	return quantity;
}

void OrderItem::printOrderItem(ofstream& output_file, vector<DrinkItem>& drinks)
{
	DrinkItem drinkitem = drinks[itemIndex - 1];
	 output_file << "You order drinks is : " << drinkitem.getName() << " " << drinkitem.getSize() <<
		" " << quantity << " cops¡Aones " << drinkitem.getPrice() << "NTD, Total " << drinkitem.getPrice() * quantity << "NTD" << endl;
}

