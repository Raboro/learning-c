#include <stdio.h>
#include "option.h"

int main(int argc, char *argv[])
{
    struct Option *option_some = some(10);
    printf("%d : %d\n", is_some(option_some), get(option_some));
    struct Option *option_none = none();
    printf("%d : %d\n", is_some(option_none), get(option_none));

    return 0;
}