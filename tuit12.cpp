// pointer
// #include<iostream>
// using namespace std;

// int main()
// {
//     int a=12;
//     int* b= &a;
// cout<<*b<<endl;
// return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter two number for which you want lcm of" << endl;
    cin >> a>>b;
    
    for (int i = 1; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            cout << i << endl;
            break;
        }

        
    }

    return 0;
}