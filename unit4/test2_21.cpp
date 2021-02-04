// newstruct.cpp -- using new with a structure
// 使用new创建结构体
#include <iostream>
struct inflatable
{
    /* data */
    char name[20];
    float volume;
    double price;
};
int main(){
    using namespace std;
    inflatable * ps    = new inflatable;
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);
    cout << "Enter volume in cubic feeet: ";
    cin >> (*ps).volume;
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << endl;
    cout << "Price: $" << ps->price <<endl;
    delete ps;

    system("pause");
    return 0;
}
