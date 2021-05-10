// #include <iostream>
// using namespace std;

// int main()
// {
//     float a, b;
//     cout << "enter no 1" << endl
//          << "enter no 2" << endl;
//     cin >> a >> b;
//     if (a / b > 1)
//     {
//         cout << a << " is greater" << endl;
//     }
//     else if (a / b < 1)
//     {
//         cout << b << " is greater" << endl;
//         for (int i = 1; i < 11; i++)
//         {
//             cout << b<< endl << "x"<< endl << i << endl<< "=" << b * i << endl;
//         }
//     }
//     else
//     {
//         cout << "both are equal" << endl;
//     }

//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main()
// {
//     int a;
//     cout << "enter the no after which you want even no" << endl;
//     cin >> a;
//     for (int i = a + 1; i < a + 11; i++)
//     {
//         if (i % 2 == 0)
//         {
//             if (i == 0)
//             {
//                 break;
//             }

//             cout << i << endl;
//         }
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

/*inline int product(int x, int y)
// not recommended to use below lines with inline function
// static int c = 0; this executes only once
// c = c + 2; next time it runs, it will use this value
{
    return x * y;
}
int main()
{
    int a, b;
    cout << "enter the value of a and b" << endl;
    cin >> a >> b;
    cout << "the product of both integers is " << product(a, b) << endl;
    return 0;
}*/

// default argements
// they should be in extreme right
float bonus(int salary, float percecent_salary = 1.1)
{
    return salary * percecent_salary;
}

#include <iostream>
using namespace std;

int main()
{
    char caste;
    cout << "enter  G for general caste and R for reserved caste and O for obc " << endl;
    cin >> caste;
    int sal;
    cout << "enter your salary" << endl;
    cin >> sal;
    switch (caste)

    {
    case 'G':
        cout << "your caste is general and your bonus will be:" << bonus(sal) << endl;
        break;
    case 'O':
        cout << "your caste is obc and your bonus is " << bonus(sal, 1.2) << endl;
        break;

    default:
        cout << "your caste is reserved and your bonus is " << bonus(sal, 1.5) << endl;
        break;
    }
    return 0;
}
