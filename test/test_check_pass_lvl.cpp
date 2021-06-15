#include <ctest.h>

#include <libKBNinja/check_pass_lvl.h>
#include <libKBNinja/constants.h>

CTEST(pass_lvl, Win)
{
    double current_time = 10.0;
    double max_time = 11.0;
    int current_errors = 0;
    int max_errors = 3;

    int exp_result = lvl_pass;
    int result = check_pass_lvl(
            current_time, max_time, current_errors, max_errors);

    ASSERT_EQUAL(exp_result, result);
}

CTEST(pass_lvl, Over_time)
{
    double current_time = 15.0;
    double max_time = 11.0;
    int current_errors = 0;
    int max_errors = 3;

    int exp_result = over_time;
    int result = check_pass_lvl(
            current_time, max_time, current_errors, max_errors);

    ASSERT_EQUAL(exp_result, result);
}

CTEST(pass_lvl, Over_errors)
{
    double current_time = 10.0;
    double max_time = 11.0;
    int current_errors = 5;
    int max_errors = 3;

    int exp_result = over_errors;
    int result = check_pass_lvl(
            current_time, max_time, current_errors, max_errors);

    ASSERT_EQUAL(exp_result, result);
}

CTEST(pass_lvl, Over_time_errors)
{
    double current_time = 15.0;
    double max_time = 11.0;
    int current_errors = 5;
    int max_errors = 3;

    int exp_result = over_time_errors;
    int result = check_pass_lvl(
            current_time, max_time, current_errors, max_errors);

    ASSERT_EQUAL(exp_result, result);
}
