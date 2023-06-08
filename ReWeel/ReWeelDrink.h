#pragma once

#include <iostream>
#include<iomanip>
#include<string.h>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
//#include<array>
#include"DrinkItem.h"
#include"OrderItem.h"


void AddNewDrink(std::vector<DrinkItem>&);
void DisplayDrinkMenu(vector<DrinkItem>&);
void OrderDrink(vector<OrderItem>&, vector<DrinkItem>&);
void CalculateSalePrice(vector<OrderItem>&);
void PrintOrder(vector<OrderItem>&, vector<DrinkItem>, string, string, int, int);
string ReadFile(const string&);
vector<string> Split(const string&, char);


/*
{
    cout << setw(4) << "number" << setw(10) << "DrinkName" << setw(10) << "Size" << setw(10) << "pirce" << endl;
    cout << "----------------------------------" << endl;

    int i = 1;
    for (DrinkItem item : drinks) {
        cout << setw(6) << i++;
        item.DisplayItem();
    }


    /*int i = 1;
    vector<DrinkItem>::iterator v = drinks.begin();
    while (v!= drinks.end())
    {
    cout << setw(4) << i;
    v->DisplayItem();
    i++;
    v++;
    }
    cout << "----------------------------------" << endl;

}
*/