// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter the no to know whether it is prime of not" << endl;
//     cin >> n;
//     int flag = 0;
//     if (n==0||n==1)
//     {
//         cout<<n<<" is neither prime nor composite"<<endl;
//         exit(0);
//     }
    
//     for (int i = 2; i <= (n / 2); i++)
//     {
//         if (n % i == 0)
//         {
//             cout << n << " is not a prime no." << endl;
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//     {
//         cout << n << " is prime no." << endl;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void){
        // cout<<id; // throws an error
        cout<<"The value of count is "<<count<<endl;
    }
};

// Count is the static data member of class Employee
int Employee::count; // Default value is 0

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    Employee::getCount();

    return 0;
}
