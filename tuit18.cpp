#include <iostream>
using namespace std;
// recursion and recursive function
// int factorial(int a)
// {
//     if (a <= 1)
//     {
//         return 1;
//     }
//     return a * factorial(a-1);
//     return 0;
// }
// int main()
// {
//     int num;
//     cout << "enter the no u want factorial of:" << endl;
//     cin >> num;
//     cout << "the factorial of number is:" << factorial(num) << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int fibo(int num)
{
    if (num == 1 || num == 2)
    {
        return 1;
    }
    return fibo(num-1) + fibo(num - 2);
    return 0;
}

int main()
{
    int n;
    cout << "enter the nth term which you want from fibonacci series" << endl
         << "note: index start from 1" << endl;
    cin >> n;
    cout << n << "th term of fibonacci series is: " << fibo(n) << endl;
    return 0;
}