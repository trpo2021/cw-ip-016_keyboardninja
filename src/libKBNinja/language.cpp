#include "language.h"

#include "constants.h"
#include "convert_key_to_language.h"
#include "getch.h"

#include <iostream>
#include <string>

using namespace std;

/*
language - this function is responsible for selecting the language in which the
text will be typed in the future
*/

string language()
{
    int key = 0; // menu item
    int input;   // key pressed

    do {
        system("clear");

        cout << "Choose language:" << endl;

        key = (key + 2) % 2;

        if (key == 0)
            cout << "<Russian>" << endl;
        else
            cout << "Russian" << endl;

        if (key == 1)
            cout << "<English>" << endl;
        else
            cout << "English" << endl;

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

    return convert_key_to_language(key);
}
