// #include <iostream>
// using namespace std;
// int fac(int a)
// {
//     if (a == 0 || a == 1)
//     {
//        return 1; /* code */
//     }
//     // else if (/* condition */)
//     // {
//     //     /* code */
//     // }
//     else
//     {
//        return a * fac(a - 1);
//     }

//     return 0;
// }

// int main()
// {
//     int b;
//     cout << "enter the no you want factorial of:" << endl;
//     cin >> b;
//     cout << fac(b);
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    // for (int i = 0; i < 3; i++)
    // {
    //     int a;
    //     cout << "enter you age please" << endl;
    //     cin >> a;
    //     if (a > 18)
    //     {
    //         cout << "you can vote baby"<<endl;
    //     }
    //     else if (/* condition */ a == 18)
    //     {
    //         /* code */ cout << "wait a year please"<<endl;
    //     }
    //     else
    //     {
    //         cout << "you cannot vote babes"<<endl; /* code */
    //     }                                 /* code */
    // }

    int i = 0;
    label:
    if (i<4)
    {
        cout<< i <<endl;
        i++;
        goto label;
    }
    
    return 0;
}
