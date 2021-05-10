#include <iostream>
using namespace std;

int main()
{
    //     for (int i = 1; i < 6; i++)
    //     {
    //         for (int j = 5; j >= i; j--)
    //         {
    //             cout << "*";
    //         }
    //         cout << "\n";
    //     }
    //     int i = 1;
    //     do
    //     {
    //         /* code */ cout << i <<endl;
    //         i++;
    //     } while (i <= 10);

    // for loop
    // while loop
    // do while loop
    int j = 1;
    int i;
    cout<<"enter the no you want table of:"<<endl;
    cin>>i;
    do
    {
        cout <<i << "* " << j << " = " << i * j<<endl;
        j++;
        /* code */
    } while (j <= 10);

        return 0;
    }