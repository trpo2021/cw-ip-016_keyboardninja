#include "about.h"

#include "constants.h"
#include "getch.h"

#include <iostream>

using namespace std;

/*
about - this function shows information about KBNinja developers
*/

void about()
{
    cout << "Programm made in 2021" << endl;
    cout << "Autors:" << endl;
    cout << "Alexey Egoshin | alexegoshin0403@yandex.ru" << endl;
    cout << "Maxim Valter   | maxuswill@yandex.ru" << endl;
    cout << "Ilya Zaicev    | ilyazaytsev2002@bk.ru" << endl << endl;

    cout << "For exit press Enter" << endl;

    int input;

    do {
        input = getch();
    } while (input != enter);

    system("clear");
}
