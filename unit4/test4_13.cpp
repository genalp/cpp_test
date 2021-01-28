// arrstruc.cpp -- an array of structures
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main(){
    using namespace std;
    inflatable guests[2] = 
    {
        {"bambi", 0.5, 21.99},
        {"Godzilla", 2000, 565.99}
    };

    cout << guests[0].name << endl;
    cout << guests[0].price + guests[1].price << endl;

    system("pause");
    return 0;
}
