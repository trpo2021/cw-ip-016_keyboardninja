#include "new_game_save.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

/*
new_game - this function returns the parameters in the save to the original ones
*/

void new_game(string lang, int lvl)
{
    const string path = "src/resources/save.txt";

    ofstream savefile(path);

    if (savefile.is_open()) {
        savefile << lang << endl;
        savefile << lvl << endl;
    } else {
        cout << "Error open file with save!" << endl;
    }
    savefile.close();
}
