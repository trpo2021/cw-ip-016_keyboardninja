#include "get_str.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

/*
get_srt - this function searches for the desired line in the file with the level
parameters
*/

string get_str(int lvl)
{
    const string path = "src/resources/control.txt";

    string str;
    ifstream file(path);

    if (!file.is_open())
        cout << "Error open file!";
    else {
        int number_current_str = 0;
        while (getline(file, str)) {
            if (number_current_str == lvl - 1) {
                break;
            }
            number_current_str++;
        }
    }
    file.close();

    return str;
}
