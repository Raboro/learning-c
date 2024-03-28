#ifndef OPTION
#define OPTION

#include <stdlib.h>

enum OptionValue
{
    SOME,
    NONE
};

struct Option
{
    int value;
    enum OptionValue option_value;
};

struct Option *some(int value);

struct Option *none();

int is_some(struct Option *option);

int is_none(struct Option *option);

int get(struct Option *option);

#endif