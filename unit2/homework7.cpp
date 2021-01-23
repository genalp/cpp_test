//练习7 -- 输入输出函数练习

#include <iostream>
void output(int hour, int min);
using namespace std;

int main(void){
    int hour,min;
    cout << "Enter the number of hours: ";
    cin >> hour;
    cout << "Enter the number of minutes: ";
    cin >> min;
    output(hour,min);
    system("pause");
    return 0;
}

void output(int hour, int min){
    cout << "Time: " << hour << ":" << min << endl;
}