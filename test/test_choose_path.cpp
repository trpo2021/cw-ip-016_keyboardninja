#include <ctest.h>
#include <string>

using namespace std;

#include <libKBNinja/choose_path.h>

CTEST(choose_path, RU_1)
{
    string language = "RU";
    int lvl = 1;
    string path = "src/resources/symbol_RU.txt";
    string result = choose_path(language, lvl);

    ASSERT_STR(path.c_str(), result.c_str());
}

CTEST(choose_path, RU_5)
{
    string language = "RU";
    int lvl = 5;
    string path = "src/resources/words_RU.txt";
    string result = choose_path(language, lvl);

    ASSERT_STR(path.c_str(), result.c_str());
}

CTEST(choose_path, RU_9)
{
    string language = "RU";
    int lvl = 9;
    string path = "src/resources/sentence_RU.txt";
    string result = choose_path(language, lvl);

    ASSERT_STR(path.c_str(), result.c_str());
}

CTEST(choose_path, RU_11)
{
    string language = "RU";
    int lvl = 11;
    string path = "src/resources/paragraph_RU.txt";
    string result = choose_path(language, lvl);

    ASSERT_STR(path.c_str(), result.c_str());
}

CTEST(choose_path, EN_2)
{
    string language = "EN";
    int lvl = 2;
    string path = "src/resources/symbol_EN.txt";
    string result = choose_path(language, lvl);

    ASSERT_STR(path.c_str(), result.c_str());
}

CTEST(choose_path, EN_6)
{
    string language = "EN";
    int lvl = 6;
    string path = "src/resources/words_EN.txt";
    string result = choose_path(language, lvl);

    ASSERT_STR(path.c_str(), result.c_str());
}

CTEST(choose_path, EN_7)
{
    string language = "EN";
    int lvl = 7;
    string path = "src/resources/sentence_EN.txt";
    string result = choose_path(language, lvl);

    ASSERT_STR(path.c_str(), result.c_str());
}

CTEST(choose_path, EN_12)
{
    string language = "EN";
    int lvl = 12;
    string path = "src/resources/paragraph_EN.txt";
    string result = choose_path(language, lvl);

    ASSERT_STR(path.c_str(), result.c_str());
}

CTEST(choose_path, Error_lvl)
{
    string language = "EN";
    int lvl = 24;
    string path;
    string result = choose_path(language, lvl);

    ASSERT_STR(path.c_str(), result.c_str());
}

CTEST(choose_path, Error_language)
{
    string language = "KZ";
    int lvl = 12;
    string path;
    string result = choose_path(language, lvl);

    ASSERT_STR(path.c_str(), result.c_str());
}

CTEST(choose_path, Error_lvl_language)
{
    string language = "KZ";
    int lvl = 57;
    string path;
    string result = choose_path(language, lvl);

    ASSERT_STR(path.c_str(), result.c_str());
}
