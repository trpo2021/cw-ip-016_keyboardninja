#include "select_str.h"

#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
select_str - this function selects a random string from a file without builds
*/

string select_str(string path, int number_lines, vector<int>& used_str)
{
    srand(time(NULL));

    ifstream file(path);

    string element;

    if (!file.is_open()) {
        cout << "Error open file" << endl;
    } else {
        bool choice;
        int choise_sentence;
        do {
            choice = false;

            // selecting a random element
            choise_sentence = rand() % number_lines;

            // check for repetition
            for (unsigned int i = 0; i < used_str.size(); ++i) {
                if (used_str[i] == choise_sentence) {
                    choice = true;
                    break;
                }
            }
        } while (choice);

        // adding an element to the vector
        used_str.push_back(choise_sentence);

        int number_current_str = 0;

        // looking for the desired string
        while (getline(file, element)) {
            if (number_current_str == choise_sentence - 1) {
                break;
            }
            number_current_str++;
        }
        file.close();
    }

    return element;
}
