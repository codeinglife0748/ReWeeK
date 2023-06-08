
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
#include"ReWeelDrink.h"
using namespace std;

void AddNewDrink(std::vector<DrinkItem>& drinks)
{
    //drinks.push_back(DrinkItem("black tea", "S", 20));
    //drinks.push_back(DrinkItem("black tea", "M", 25));
    //drinks.push_back(DrinkItem("green tea", "L", 20));
    //drinks.push_back(DrinkItem("green tea", "S", 15));
    //drinks.push_back(DrinkItem("coffee", "M", 40));
    //drinks.push_back(DrinkItem("black tea", "L", 55));
    //drinks.push_back(DrinkItem("cola", "S", 20));
    //drinks.push_back(DrinkItem("cola", "L", 30));

    string filename("drinks.csv");
    string file_content = ReadFile(filename);

    vector<string> lines = Split(file_content, '\n');
    for (string line : lines) {
        vector<string> fields = Split(line, ',');
        if (fields.size() == 3)
        {
            string name = fields[0];
            string size = fields[1];
            int price = stoi(fields[2]);

            drinks.push_back(DrinkItem(name, size, price));
        }
        
    }

}

string ReadFile(const string& filename) {
    auto string_content = ostringstream();
    ifstream input_file(filename);
    if (!input_file.is_open())
    {
        cout << "Can not read file" << filename << endl;
        return "";
    }

    string_content << input_file.rdbuf();
    input_file.close();
    return string_content.str();
}


void DisplayDrinkMenu(vector<DrinkItem>& drinks)
{
    cout << setw(4) << "number" << setw(10) << "DrinkName" << setw(10) << "Size" << setw(10) << "pirce" << endl;
    cout << "----------------------------------" << endl;

    int i = 1;
    for (DrinkItem item : drinks) {
        cout << setw(6) << i;
        item.displayItem();
        i++;
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
void OrderDrink(vector<OrderItem>& order, vector<DrinkItem>& drinks)
{
    int index;
    int qty;
    char ans = 'Y';

    do {
        cout << "Please order the drink number : ";
        cin >> index;
        cout << "please input how much drinks you want : ";
        cin >> qty;
        if (index < 1 || index > drinks.size()) {
            cout << "Drink serial error,Please resend again : " << endl;
        }
        else if(qty <1)
        {
            cout << "Drink number errorr, Please resend again : " << endl;
        }
        else
        {
            OrderItem orderitem(index, qty);
            order.push_back(orderitem);
            orderitem.displayOrderItem(drinks);
            cout << "Keeping Order?(Press 'Y' keep order) ";
            cin >> ans;
        }
    } while (ans == 'Y' || ans == 'y');

}

void CalculateSalePrice(vector<OrderItem>& order, vector<DrinkItem>& drinks)
{
    int takeIn = 1;
    cout << "In use or take out(1:in use 2:take out)";
    cin >> takeIn;
    string messageTakeIn = (takeIn == 1) ? "In use" : "Take out";

    int totalPrice = 0;
    int salePrice = 0;
    string messagePrice = "";
    cout << "-----------------------------------------" << endl;
    cout << "This your order check list : " << endl;
    cout << "-----------------------------------------" << endl;
    for (OrderItem orderitem : order) {
        orderitem.displayOrderItem(drinks);
        DrinkItem drinkitem = drinks[orderitem.getIndex() - 1];
        totalPrice += drinkitem.getPrice() * orderitem.getQuantity();
    }
    if (totalPrice >= 500)
    {
        salePrice = totalPrice * 0.8;
        messagePrice = "order amount over 500NTD has 20%off";
    }
    else if (totalPrice >= 300)
    {
        salePrice = totalPrice * 0.9;
        messagePrice = "order amount over 300NTD has 10%off";
    }
    else if (totalPrice >= 200)
    {
        salePrice = totalPrice * 0.95;
        messagePrice = "order amount over 200NTD has 5%off";
    }
    else
    {
        salePrice = totalPrice;
        messagePrice = "order amount not over 200 no sale";
    }
    cout <<"-----------------------------------------" << endl;
    cout << "ordering method : " << messageTakeIn << endl;
    cout << "total Price : " << totalPrice << endl;
    cout << messagePrice << endl;
    cout << "Price : " << salePrice << endl;
    cout << "-----------------------------------------" << endl;

    PrintOrder(order,drinks, messageTakeIn, messagePrice, totalPrice, salePrice);

}
void PrintOrder(vector<OrderItem>& order, vector<DrinkItem> drinks, string messageTakeIn, string messagePrice, int totalPrice, int salePrice)
{
    string filename{ "order.txt" };
    ofstream output_file;
    output_file.open(filename, ios::app);
    if (!output_file.is_open())
    {
        cout << "Can not write to file" << filename << endl;
        return;
    }
    output_file << "-----------------------------------------" << endl;
    output_file << "This your order check list : " << endl;
    output_file << "-----------------------------------------" << endl;
    for (OrderItem orderitem : order) {
        orderitem.printOrderItem(output_file, drinks);
    }
    output_file << "-----------------------------------------" << endl;
    output_file << "ordering method : " << messageTakeIn << endl;
    output_file << "total Price : " << totalPrice << endl;
    output_file << messagePrice << endl;
    output_file << "Price : " << salePrice << endl;
    output_file << "-----------------------------------------" << endl;

    output_file.close();
}

vector<string> Split(const string& string_content, char delimiter)
{
    vector<string> tokens;
    string token;
    istringstream tokensStream(string_content);
    while (getline(tokensStream,token,delimiter))
    {
        tokens.push_back(token);
    }

    return tokens;
}

int main()
{
    
    vector<DrinkItem>drinks;
    vector<OrderItem> order;
    //array<int, 5>a = { 1,2,3,4,5 };
    //array<array<int, 2>, 3>b = { 1,2,3,4,5,6 };

    AddNewDrink(drinks);
    DisplayDrinkMenu(drinks);
    OrderDrink(order, drinks);
    CalculateSalePrice(order, drinks);

    return 0;
}
//