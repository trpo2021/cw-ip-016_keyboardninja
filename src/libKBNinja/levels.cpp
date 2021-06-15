#include "levels.h"

#include "constants.h"
#include "getch.h"

#include <iostream>

using namespace std;

/*
levels - this function displays a map of levels and prompts the user to select
*/

int levels()
{
    int key = 0; // menu item
    int input;   // key pressed

    do {
        system("clear");

        cout << "Choose level for continue" << endl << endl;

        key = (key + 12) % 12;

        if (key == 0)
            cout << "<LEVEL 1>" << endl;
        else
            cout << "LEVEL 1" << endl;

        if (key == 1)
            cout << "<LEVEL 2>" << endl;
        else
            cout << "LEVEL 2" << endl;

        if (key == 2)
            cout << "<LEVEL 3>" << endl;
        else
            cout << "LEVEL 3" << endl;

        if (key == 3)
            cout << "<LEVEL 4>" << endl;
        else
            cout << "LEVEL 4" << endl;

        if (key == 4)
            cout << "<LEVEL 5>" << endl;
        else
            cout << "LEVEL 5" << endl;

        if (key == 5)
            cout << "<LEVEL 6>" << endl;
        else
            cout << "LEVEL 6" << endl;

        if (key == 6)
            cout << "<LEVEL 7>" << endl;
        else
            cout << "LEVEL 7" << endl;

        if (key == 7)
            cout << "<LEVEL 8>" << endl;
        else
            cout << "LEVEL 8" << endl;

        if (key == 8)
            cout << "<LEVEL 9>" << endl;
        else
            cout << "LEVEL 9" << endl;

        if (key == 9)
            cout << "<LEVEL 10>" << endl;
        else
            cout << "LEVEL 10" << endl;

        if (key == 10)
            cout << "<LEVEL 11>" << endl;
        else
            cout << "LEVEL 11" << endl;

        if (key == 11)
            cout << "<LEVEL 12>" << endl;
        else
            cout << "LEVEL 12" << endl;

        input = getch();

        if (input == funct_button) {
            input = getch();
            if (input == 91) {
                input = getch();
                if (input == up)
                    key++;
                if (input == down)
                    key--;
                if (input == funct_button)
                    key = 20;
            }
        }
    } while (input != enter && input != funct_button);

    system("clear");

    if (input == funct_button)
        key = 20;

    return key;
}
