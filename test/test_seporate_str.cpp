#include <ctest.h>
#include <string>

using namespace std;

#include <libKBNinja/seporate_str.h>

const int number_parameters = 3;

CTEST(seporate_str, Lvl_2)
{
    string control = "20;21;5";
    int* real_parameters = new int[number_parameters];
    int* exp_parameters = new int[number_parameters];

    real_parameters[0] = 20;
    real_parameters[1] = 21;
    real_parameters[2] = 5;

    seporate_str(
            control, exp_parameters[0], exp_parameters[1], exp_parameters[2]);

    for (int i = 0; i < number_parameters; ++i) {
        ASSERT_EQUAL(exp_parameters[i], real_parameters[i]);
    }

    delete[] real_parameters;
    delete[] exp_parameters;
}

CTEST(seporate_str, Lvl_5)
{
    string control = "10;24;6";
    int* real_parameters = new int[number_parameters];
    int* exp_parameters = new int[number_parameters];

    real_parameters[0] = 10;
    real_parameters[1] = 24;
    real_parameters[2] = 6;

    seporate_str(
            control, exp_parameters[0], exp_parameters[1], exp_parameters[2]);

    for (int i = 0; i < number_parameters; ++i) {
        ASSERT_EQUAL(exp_parameters[i], real_parameters[i]);
    }

    delete[] real_parameters;
    delete[] exp_parameters;
}

CTEST(seporate_str, Lvl_10)
{
    string control = "1;41;13";
    int* real_parameters = new int[number_parameters];
    int* exp_parameters = new int[number_parameters];

    real_parameters[0] = 1;
    real_parameters[1] = 41;
    real_parameters[2] = 13;

    seporate_str(
            control, exp_parameters[0], exp_parameters[1], exp_parameters[2]);

    for (int i = 0; i < number_parameters; ++i) {
        ASSERT_EQUAL(exp_parameters[i], real_parameters[i]);
    }

    delete[] real_parameters;
    delete[] exp_parameters;
}
