#include "getch.h"

#include <cstdio>
#include <termios.h>

static struct termios old_parameters, new_parameters;

/*
new_terminal - procedure for changing terminal parameters
*/
void new_terminal()
{
    // getting the old input/output parameters in the terminal
    tcgetattr(0, &old_parameters);

    // setting the old values for the new parameters
    new_parameters = old_parameters;

    // turning off the canonical mode of the terminal
    new_parameters.c_lflag &= ~ICANON;

    // setting the ECHO mode so that the character you enter is not displayed on
    // the screen
    new_parameters.c_lflag &= ~ECHO;

    // setting new input/output parameters in the terminal
    tcsetattr(0, TCSANOW, &new_parameters);
}

/*
old_terminal - procedure for restoring old terminal parameters
*/
void old_terminal()
{
    // setting old input/output parameters in the terminal
    tcsetattr(0, TCSANOW, &old_parameters);
}

/*
getch - function for reading 1 character with changing terminal parameters
*/
char getch()
{
    char characte;        // contains the pressed character
    new_terminal();       // setting new terminal parameters
    characte = getchar(); // enter a single character
    old_terminal();       // restoring the old terminal settings
    return characte;      // returning the character
}
