// #include <iostream>
// using namespace std;

// class Shop
// {
//     int itemId[100];
//     int itemPrice[100];
//     int counter;

// public:
//     void initCounter(void) { counter = 0; }
//     void setPrice(void);
//     void displayPrice(void);
// };

// void Shop ::setPrice(void)
// {
//     cout << "Enter Id of your item no " << counter + 1 << endl;
//     cin >> itemId[counter];
//     cout << "Enter Price of your item" << endl;
//     cin >> itemPrice[counter];
//     counter++;
// }

// void Shop ::displayPrice(void)
// {
//     for (int i = 0; i < counter; i++)
//     {
//         cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
//     }
// }

// int main()
// {
//     Shop dukaan;
//     dukaan.initCounter();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.displayPrice();
//     return 0;
// }

#include <iostream>
using namespace std;

class employee
{
private:
    int counter;
    int itemid[100];
    int itemprice[100];

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
};

void employee::setprice(void)
{
    cout << "enter the id of your item" << counter + 1 << endl;
    cin>>itemid[counter];
    cout << "enter the price of your item" << counter + 1 << endl;
    cin>>itemprice[counter];
    counter++;
}

void employee ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main()
{
    cout << "" << endl;
    return 0;
}