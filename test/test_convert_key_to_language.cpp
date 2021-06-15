#include <ctest.h>
#include <string>

using namespace std;

#include <libKBNinja/convert_key_to_language.h>

CTEST(convert_key_to_language, EN)
{
    int key = 1;
    string exp_result = "EN";
    string result = convert_key_to_language(key);

    ASSERT_STR(exp_result.c_str(), result.c_str());
}

CTEST(convert_key_to_language, RU)
{
    int key = 0;
    string exp_result = "RU";
    string result = convert_key_to_language(key);

    ASSERT_STR(exp_result.c_str(), result.c_str());
}

CTEST(convert_key_to_language, Error_key)
{
    int key = 5;
    string exp_result;
    string result = convert_key_to_language(key);

    ASSERT_STR(exp_result.c_str(), result.c_str());
}
