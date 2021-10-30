// 传递结构的指针
#include<iostream>
#include<cmath>

// 定义结构
struct polar
{
    double distance;
    double angle;
};
struct rect
{
    double x;
    double y;
};

// 声明函数
void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);

int main()
{
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while(cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";

    system("pause");
    return 0;
}

void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);