// cingolf.cpp -- non-numeric input skipped
#include <iostream>
const int MAX = 5;
int main()
{
    using namespace std;
    // get data
    int golf[MAX];
    cout << "Please enter your golf scores.\n";
    cout << "You must enter " << MAX << " rounds.\n";
    int i;
    for(i = 0; i < MAX; i ++)
    {
        cout << "round # " << i + 1 << ": ";
        while (!(cin >> golf[i]))
        {
            /* code */
            cin.clear();
            while (cin.get() != '\n')
            {
                /* code */
                continue;
            }
            cout << "Please enter a number: ";
        }
    }
    double total = 0.0;
    for(i = 0; i < MAX; i ++)
        total += golf[i];
    cout << total / MAX << endl;

    system("pause");
    return 0;
}