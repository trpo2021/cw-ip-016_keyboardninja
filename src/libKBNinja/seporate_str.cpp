#include "seporate_str.h"

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

/*
tseporate_str - his function splits the resulting string into variables and
enters the values in the level parameters
*/

void seporate_str(string str, int& purpose, int& time, int& errors)
{
    char separator = ';';

    vector<string> elements;

    stringstream ss(str);
    string item;

    while (getline(ss, item, separator)) {
        elements.push_back(item);
    }

    purpose = stoi(elements[0]);
    time = stoi(elements[1]);
    errors = stoi(elements[2]);
}
