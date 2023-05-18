
#include <iostream>
#include<iomanip>
#include<bitset>
#include<string.h>
#include<string>
#include<vector>
//#include<array>
#include<iomanip>
#include"DrinkItem.h"
#include"OrderItem.h"
using namespace std;

void AddNewDrink(std::vector<DrinkItem>& drinks)
{
    drinks.push_back(DrinkItem("black tea", "S", 20));
    drinks.push_back(DrinkItem("black tea", "M", 25));
    drinks.push_back(DrinkItem("green tea", "L", 20));
    drinks.push_back(DrinkItem("green tea", "S", 15));
    drinks.push_back(DrinkItem("coffee", "M", 40));
    drinks.push_back(DrinkItem("black tea", "L", 55));
    drinks.push_back(DrinkItem("cola", "S", 20));
    drinks.push_back(DrinkItem("cola", "L", 30));
}
void DisplayDrinkMenu(vector<DrinkItem>& drinks)
{
    cout << setw(4) << "number" << setw(10) << "DrinkName" << setw(10) << "Size" << setw(10) << "pirce" << endl;
    cout << "----------------------------------" << endl;

    int i = 1;
    for (DrinkItem item : drinks) {
        cout << setw(6) << i;
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
    }*/
    cout << "----------------------------------" << endl;

}
void OrderDrink(vector<OrderItem>& order)
{

}

int main()
{
    
    vector<DrinkItem>drinks;
    vector<OrderItem> order;
    //array<int, 5>a = { 1,2,3,4,5 };
    //array<array<int, 2>, 3>b = { 1,2,3,4,5,6 };

    AddNewDrink(drinks);
    DisplayDrinkMenu(drinks);
    OrderDrink(order);
}

