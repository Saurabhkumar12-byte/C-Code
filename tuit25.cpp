// #include <iostream>
// using namespace std;
// class tuit25
// {
// private:
//     int id;

// public:
//     int setid(void)
//     {
//         for (int i = 0; i < 11; i++)
//         {
//             cout << i << endl;
//         }
//     }
// };

// int main()
// {
//     tuit25 hi;
//     int c=hi.setid();
//     cout << c << endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;

// class complex{
//     int a;
//     int b;

//     public:
//         void setData(int v1, int v2){
//             a = v1;
//             b = v2;
//         }

//         void setDataBySum(complex o1, complex o2){
//             a = o1.a + o2.a;
//             b = o1.b + o2.b;
//         }

//         void printNumber(){
//             cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
//         }
// };

// int main(){
//     complex c1, c2, c3;
//     c1.setData(1, 2);
//     c1.printNumber();

//     c2.setData(3, 4);
//     c2.printNumber();

//     c3.setDataBySum(c1, c2);
//     c3.printNumber();
//     return 0;
// }

// passing array to class

#include <iostream>
using namespace std;

class complex
{

private:
    int a;
    int b;

public:
    int set_data(int v1, int v2)
    {
        a = v1;
        b = v2;
        return 0;
    }
    int get_data(void)
    {
        cout << a <<endl<< b << endl;
        return 0;
    }
};

int main()
{
    complex c1, c2;
    c1.set_data(3, 4);
    c1.get_data();

    return 0;
}
