//  break and continue
// #include<iostream>
// using namespace std;

// int main()
// {
// for (int i = 0; i < 4; i++)
// {
//     if (i==2)
//     {
//         // continue;
//         break;
//     }
//     else
//     {
//         cout<<i;
//     }

// }

// return 0;
// }
// reverse of a no in cpp
#include <iostream>
using namespace std;

int main()
{
    int i, j, k = 0;

    cout << "enter the no. you want reverse of" << endl;
    cin >> i;
    while (i != 0)
    {
        j = i % 10;
        k = k * 10 + j;
        i = i / 10;
    }
    cout << k;
    return 0;
}