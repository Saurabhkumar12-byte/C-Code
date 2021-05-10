// structure union enum
// #include <iostream>
// using namespace std;

// int main()
// {
//     struct data
//     {
//         int roll_no;
//         float marks;
//         int fee;
//     } saurabh, raj;
//     typedef struct data sd;
//     raj.fee = 23000;
//     raj.marks = 89;
//     sd ad;
//     ad.roll_no = 45;
//     cout << ad.roll_no << endl;
//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    enum friends
    {
        ad,
        raj,
        saurabh
    };
    cout << (saurabh == 2);
    return 0;
}