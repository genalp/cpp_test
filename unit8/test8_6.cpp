// strc_ref.cpp -- using strucyure refrences
#include <iostream>
#include <string>
struct free_throws
{
    /* data */
    std::string name;
    int made;
    int attempte;
    float percent;
};

void display(const free_throws & ft)
{
    using std::cout;
    cout << "Name: " << ft.name << "\n";
    cout << " Made: " << ft.made << "\t";
    cout << "Attempts: " << ft.attempte << "\t";
    cout << "Percent: " << ft.percent << "\n";
}

void set_pc(free_throws & ft)
{
    if (ft.attempte != 0)
        ft.percent = 100.0f *float(ft.made)/float(ft.attempte);
    else
        ft.percent = 0;
}

free_throws & accumulate(free_throws & target, const free_throws & source)
{
    target.attempte += source.attempte;
    target.made += source.made;
    set_pc(target);
    return target;
}

int main()
{
    // partial initialization - remaining members set to 0
    free_throws one = {"aaa", 13, 14};
    free_throws two = {"bbb", 10, 16};
    free_throws three = {"ccc", 7, 9};
    free_throws four = {"ddd", 5, 9};
    free_throws five = {"eee", 6, 14};
    free_throws team = {"xxx", 0, 0};
    // no initialization
    free_throws dup;

    set_pc(one);
    display(one);
    accumulate(team, one);
    display(team);
    // use return value as argument
    display(accumulate(team, two));
    accumulate(accumulate(team, three), four);
    display(team);
    // use return value as assignment
    dup = accumulate(team, five);
    std::cout << "Display team:\n";
    display(team);
    std::cout << "Display dup:\n";
    display(dup);
    set_pc(four);
    // ill-advised assigment
    accumulate(dup, four);
    std::cout << "Display dup after ill-advised assigment:\n";
    display(dup);

    system("pause");
    return 0;
}