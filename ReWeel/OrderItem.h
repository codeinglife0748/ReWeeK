#pragma once
#include<vector>
#include"DrinkItem.h"
class OrderItem
{
	int itemIndex;
	int quantity;
	int subTotal = 0;
public:
	OrderItem(int, int);
	void displayOrderItem(vector<DrinkItem>&);
	int getIndex();
	int getQuantity();

};
