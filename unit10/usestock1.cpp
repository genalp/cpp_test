#include <iostream>
#include "stock10.h"

// int main()
// {
//     {
//         using std::cout;
//         cout << "Using constructors to create new objects\n";
//         Stock stock1("NanoSmart", 12, 2.0);
//         stock1.show();
//         Stock stock2 = Stock("Boffo Objects", 2, 2.0);
//         stock2.show();

//         cout << std::endl << "Assigning stock1 to stock2:\n";
//         stock2 = stock1;
//         cout << "Listing stock1 and stock2:\n";
//         stock1.show();
//         stock2.show();

//         cout << "Using a constructor to reset an object\n";
//         stock1 = Stock("Nifty Food", 10, 50.0);
//         cout << "Revised stock1:\n";
//         stock1.show();
//         cout << "Done.\n";
//     }

//     system("pause");
//     return 0;
// }

const int STKS = 4;
int main()
{
    Stock stocks[STKS] = {
        Stock{"NanoSmart", 12, 20.0},
        Stock{"Boffo Object", 200, 2.0},
        Stock{"Monolithic Obelisks", 130, 3.25},
        Stock{"Fleep Enterprise", 60, 6.5}
    };

    std::cout << "Stock holding:\n";
    int st;
    for(st = 0; st < STKS; st++)
        stocks[st].show();
    
    const Stock * top = &stocks[0];
    for(st = 1; st < STKS; st++)
        top = &top->topval(stocks[st]);

    std::cout << "\nMost valuable holding:\n";
    top->show();

    system("pause");
    return 0;
}