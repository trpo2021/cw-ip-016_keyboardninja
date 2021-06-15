#include <ctest.h>
#include <string>

using namespace std;

#include <libKBNinja/get_str.h>

CTEST(get_str, Lvl_3)
{
    int lvl = 3;
    string control = "30;27;8";
    string result = get_str(lvl);

    ASSERT_STR(control.c_str(), result.c_str());
}

CTEST(get_str, Lvl_7)
{
    int lvl = 7;
    string control = "2;26;8";
    string result = get_str(lvl);

    ASSERT_STR(control.c_str(), result.c_str());
}

CTEST(get_str, Lvl_12)
{
    int lvl = 12;
    string control = "3;136;38";
    string result = get_str(lvl);

    ASSERT_STR(control.c_str(), result.c_str());
}

CTEST(get_str, Error_lvl)
{
    int lvl = 24;
    string control;
    string result = get_str(lvl);

    ASSERT_STR(control.c_str(), result.c_str());
}
