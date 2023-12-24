#include <stdio.h>

struct Person
{
    signed int age;
    char name[50];
};

int isPersonOfAge(struct Person *p)
{
    return p->age >= 18 ? 1 : 0;
}

void printPerson(struct Person *p)
{
    int nameLength = sizeof(p->name) / sizeof(p->name[0]);
    printf("Person: %d age and name: ", p->age);
    for (int i = 0; i < nameLength; i++)
    {
        printf("%c", p->name[i]);
    }
}

int main()
{
    struct Person person = {20, {'M', 'a', 'r', 'i', 'u', 's'}};
    printf("%d\n", isPersonOfAge(&person));
    printPerson(&person);
}