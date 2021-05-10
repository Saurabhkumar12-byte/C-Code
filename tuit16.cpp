#include <iostream>
using namespace std;
// using C++ specific reference variable call by reference
int & swap(int  &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    return x;
    
}

int main()
{
    int a = 3, b = 4;
    swap(a, b) = 766;
    cout<<a<<b<<endl;
    return 0;
}






// normal call by reference using pointers
// void swap(int* x, int* y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
//     cout << *x << endl<< *y << endl;
    
// }

// int main()
// {
//     int a = 3, b = 4;
//     swap(&a, &b);
//     return 0;
// }