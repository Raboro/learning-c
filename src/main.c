#include <stdio.h>
#include <stdlib.h>

struct Person
{
    int age;
};

struct Person **create_persons(int *ages, size_t n)
{
    struct Person **persons = malloc(sizeof(struct Person *) * n);
    if (persons == NULL)
    {
        return NULL;
    }

    for (size_t i = 0; i < n; i++)
    {
        persons[i] = malloc(sizeof(struct Person));
        if (persons[i] == NULL)
        {
            for (size_t j = 0; j < i; j++)
            {
                free(persons[j]);
            }
            free(persons);
            return NULL;
        }
        persons[i]->age = ages[i];
    }

    return persons;
}
struct Person new_person(int age)
{
    struct Person person;
    person.age = age;
    return person;
}

void print_age(struct Person *person)
{
    printf("Age is : %d\n", person->age);
}

int main(int argc, char *argv[])
{
    printf("Number of arguments: %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i + 1, argv[i]);
    }

    struct Person person;
    person.age = 10;

    printf("Persons age: %d\n", person.age);

    print_age(&person);

    struct Person person2 = new_person(18);
    print_age(&person2);

    struct Person persons[2] = {person, person2};
}