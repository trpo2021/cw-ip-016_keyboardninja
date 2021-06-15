#include "lvl.h"

#include "check_pass_lvl.h"
#include "count_number_of_str.h"
#include "getch.h"
#include "results.h"
#include "select_str.h"

#include <ctime>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
lvl - this is the main function of the level operation. Here you can select a
random element to enter and the actual input itself
*/

void lvl(
        std::string path,
        int purpose,
        int max_errors,
        double max_time,
        bool& is_next_lvl)
{
    // number of lines in the file file
    int number_lines = count_number_of_str(path);

    vector<int> used_str;      // vector of used elements
    used_str.reserve(purpose); // allocating memory

    // reset the error counters and the number of characters in the string
    int errors = 0;
    int number_characters = 0;

    // time
    clock_t time_start, time_end;

    cout << "Ready?" << endl;
    getch();

    // starting the timer
    time(&time_start);

    for (int i = 0; i < purpose; ++i) {
        system("clear"); // clearing the screen

        // selecting an item
        string str = select_str(path, number_lines, used_str);

        // number of characters per line
        number_characters += str.length();

        // displaying the element on the screen
        cout << str << endl;

        // character-by-character input
        for (unsigned int i = 0; i < str.length(); ++i) {
            char tmp = getch(); // enter the character
            while (tmp != str[i]) {
                errors++;      // adding errors
                tmp = getch(); // repeat the input
            }
            cout << tmp; // print the symbol
        }
        cout << endl;
    }

    // stop the timer
    time(&time_end);

    // counting the time
    double time = difftime(time_end, time_start);

    // check for the passage of the level
    int pass_lvl = check_pass_lvl(time, max_time, errors, max_errors);

    // calling the results display function
    results(errors, time, number_characters, pass_lvl, is_next_lvl);
}
