#include <iostream>
using namespace std;
int a = 2;
int main()
{
    int a = 1;
    cout << a;
    cout <<"\n"<<::a; //:: is used to get global value of variable and is called scope resolution operator
    return 0;
}