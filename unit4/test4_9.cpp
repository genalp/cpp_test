// strtype3.cpp -- more string class features
// string类的操作
#include <iostream>
#include <string>
#include <cstring>
int main(){
    using namespace std;
    char charr1[20];
    char charr2[20] = "jaguar";
    string str1;
    string str2 = "penther";

    str1 = str2;
    strcpy(charr1,charr2);      //复制

    str1 += " paste";
    strcat(charr1, " juice");   //连接

    int len1 = str1.size();
    int len2 = strlen(charr1);  //获得长度

    cout << "The string " << str1 << " contains ";
    cout << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains ";
    cout << len2 << " characters.\n";

    system("pause");
    return 0;
}