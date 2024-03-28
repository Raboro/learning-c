#include "option.h"

struct Option *some(int value)
{
    struct Option *option = (struct Option *)malloc(sizeof(struct Option));
    option->value = value;
    option->option_value = SOME;
    return option;
}

struct Option *none()
{
    struct Option *option = (struct Option *)malloc(sizeof(struct Option));
    option->option_value = NONE;
    return option;
}

int is_some(struct Option *option)
{
    return option->option_value == SOME;
}

int is_none(struct Option *option)
{
    return option->option_value == NONE;
}

int get(struct Option *option)
{
    if (is_none(option))
    {
        return -1;
    }
    return option->value;
}