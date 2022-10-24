#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    FILE * fp;
    char buff[64];
    char temp[64] = "0";
    int i,len;

    fp = fopen("./test.txt", "r");
    fscanf(fp, "%s", buff);

    while (buff[0] != '-')
    {
        strcpy(temp, "003");
        temp[3] = buff[0];
        temp[4] = '\0';     //处理第一位数
        len = strlen(buff);
        // 处理接下来十位数
        for(i = 0; i < len; i++)
        {
            strcat(temp, "003");
            temp[i * 4 + 3] = buff[i];
            temp[i * 4 + 4] = 0;
        }
        cout << temp << endl;
        fscanf(fp, "%s", buff);
    }

    system("pause");
    return 0;
}