#include <iostream>
using namespace std;
int main()
{
    int a, b;
    
    cout << "enter first numnber\n"; //<< is insertion operator
    cin >> a;                        //>> is extraction operator

    cout << "enter second numnber\n";
    cin >> b;
    cout << "the sum is " << a + b;

    return 0;
}
