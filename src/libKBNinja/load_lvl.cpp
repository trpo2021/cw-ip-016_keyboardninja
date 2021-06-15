#include "load_lvl.h"

#include "choose_path.h"
#include "get_str.h"
#include "lvl.h"
#include "seporate_str.h"

#include <iostream>
#include <string>

using namespace std;

/*
load_lvl - This function loads the parameters for the level and starts the level
itself
*/

void load_lvl(string language, int number_lvl, bool& is_next_lvl)
{
    string control_lvl = get_str(number_lvl);

    int purpose = 0;
    int time = 0;
    int errors = 0;
    seporate_str(control_lvl, purpose, time, errors);

    string path = choose_path(language, number_lvl);

    lvl(path, purpose, errors, (double)time, is_next_lvl);
}
