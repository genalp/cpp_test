// typecast.cpp -- forcing type changes
//测试强制类型转换

#include <iostream>
int main(){
    using namespace std;
    int auks, bats, coots;

    //the following statement adds the values as double
    //then converts the result to int
    auks = 19.99 + 11.99;

    //these statements add values as int
    bats = (int) 19.99 + (int) 11.99;   // old C syntax
    coots = int (19.99) + int (11.99);  // new C++ syntax
    cout << auks << endl << bats << endl << coots << endl;

    char ch = 'Z';
    cout << int(ch) << endl;
    cout << static_cast<int>(ch) << endl;

    system("pause");
    return 0;
}