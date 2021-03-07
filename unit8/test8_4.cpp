// swap.cpp -- swapping with reference and with pointers
#include <iostream>
void swapr(int & a, int & b);
void swapp(int * p, int * q);
void swapv(int a, int b);
int main()
{
    using namespace std;
    int wallet1 = 300;
    int wallet2 = 350;
    cout << "wallet1 = $" << wallet1 << endl;
    cout << "wallet2 = $" << wallet2 << endl;

    // using references
    swapr(wallet1, wallet2);
    cout << wallet1 << endl << wallet2 << endl;

    // using pointers
    swapp(&wallet1, &wallet2);
    cout << wallet1 << endl << wallet2 << endl;

    // using value
    swapv(wallet1, wallet2);
    cout << wallet1 << endl << wallet2 << endl;

    system("pause");
    return 0;
}

void swapr(int & a, int & b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swapp(int * p, int * q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
void swapv(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}