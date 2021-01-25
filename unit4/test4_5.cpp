// instr3.cpp -- reading more than one word with get() & get()
#include <iostream>
int main(void){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Ener your name:\n";
    cin.get(name, ArSize).get();        //读取字符串和换行符
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert,ArSize).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    system("pause");
    return 0;
}