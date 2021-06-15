#include "menu.h"

#include "constants.h"
#include "getch.h"

#include <iostream>

using namespace std;

/*
menu - this function is responsible for selecting the desired item. the movement
is performed by pressing the keys up and down, the choice is enter
*/

int menu()
{
    int key = 0; // menu item
    int input;   // key pressed
    do {
        system("clear");

        key = (key + 4) % 4;

        if (key == 0) {
            cout << "<New game>" << endl << endl << endl;
        } else {
            cout << "New game" << endl << endl << endl;
        }

        if (key == 1) {
            cout << "<Continue>" << endl << endl << endl;
        } else {
            cout << "Continue" << endl << endl << endl;
        }

        if (key == 2) {
            cout << "<About>" << endl << endl << endl;
        } else {
            cout << "About" << endl << endl << endl;
        }

        if (key == 3) {
            cout << "<Exit>" << endl << endl << endl;
        } else {
            cout << "Exit" << endl << endl << endl;
        }

        input = getch();

        if (input == funct_button) {
            input = getch();
            if (input == arrows) {
                input = getch();
                if (input == up)
                    key++;
                if (input == down)
                    key--;
            }
        }
    } while (input != enter);

    system("clear");

    return key;
}
