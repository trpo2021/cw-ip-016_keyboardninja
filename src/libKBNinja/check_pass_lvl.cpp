#include "check_pass_lvl.h"

#include "constants.h"

/*
check_pass_lvl - the function of checking the passage of the level
*/

int check_pass_lvl(
        double current_time,
        double max_time,
        int current_errors,
        int max_errors)
{
    if (current_time > max_time && current_errors > max_errors)
        return over_time_errors;
    if (current_time > max_time)
        return over_time;
    if (current_errors > max_errors)
        return over_errors;
    return lvl_pass;
}
