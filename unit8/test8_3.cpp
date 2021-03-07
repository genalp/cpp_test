// secref.cpp -- defining and using a reference
#include <iostream>
int main()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;

    cout << "rets = " << rats;
    cout << ", rodents = " << rodents << endl;

    int bunnies = 50;
    rodents = bunnies;
    cout << rats << endl;

    cout << "bunnies address = " << &bunnies;
    cout << ", rodents address = " << &rodents << endl;

    system("pause");
    return 0;
}