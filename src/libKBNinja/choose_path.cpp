#include "choose_path.h"

#include <iostream>
#include <string>

using namespace std;

/*
choose_path - this function selects the path to the desired file with the
elements to enter
*/

string choose_path(string language, int lvl)
{
    const string file_path[]
            = {"src/resources/symbol_RU.txt",
               "src/resources/words_RU.txt",
               "src/resources/sentence_RU.txt",
               "src/resources/paragraph_RU.txt",
               "src/resources/symbol_EN.txt",
               "src/resources/words_EN.txt",
               "src/resources/sentence_EN.txt",
               "src/resources/paragraph_EN.txt"};
    string path;

    if (language == "RU") {
        if (lvl >= 1 && lvl <= 3)
            path = file_path[0];

        if (lvl >= 4 && lvl <= 6)
            path = file_path[1];

        if (lvl >= 7 && lvl <= 9)
            path = file_path[2];

        if (lvl >= 10 && lvl <= 12)
            path = file_path[3];
    }

    if (language == "EN") {
        if (lvl >= 1 && lvl <= 3)
            path = file_path[4];

        if (lvl >= 4 && lvl <= 6)
            path = file_path[5];

        if (lvl >= 7 && lvl <= 9)
            path = file_path[6];

        if (lvl >= 10 && lvl <= 12)
            path = file_path[7];
    }

    return path;
}
