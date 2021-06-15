#include "error_lvl.h"

#include "constants.h"
#include "getch.h"

#include <iostream>

using namespace std;

/*
error_lvl - this function displays a message that the level is closed
*/

void error_lvl()
{
    cout << "Level close" << endl;
    cout << "For continue press Enter" << endl;

    int input;

    do {
        input = getch();
    } while (input != enter);

    system("clear");
}
