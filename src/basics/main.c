#include <stdio.h>
#include <stdlib.h>

void print_str(char *c)
{
    while (*c != '\0')
    {
        printf("%c", *c);
        c++;
    }
}

struct Person
{
    int age;
    char *name;
};

typedef struct Person_t
{
    int age;
} person_t;

void print_person(struct Person *person)
{
    printf("Person %s with age: %d\n", person->name, person->age);
}

void print_person_t(person_t *person)
{
    printf("Person with age %d\n", person->age);
}

int *create_intss()
{
    int *ints = malloc(3 * sizeof(int));
    ints[0] = 10;
    ints[1] = 100;
    ints[2] = 1000;

    return ints;
}

int main(int argc, char *argv[])
{
    char c = 'h';
    printf("%c\n", c);

    int i = 100;
    short s = 10;
    long l = 1000000000;
    printf("%d, %d, %d\n", i, s, l);

    float f = 10;
    double d = -2.5;
    printf("%f %f %f\n", f, (float)s, d);

    char str[] = {'h', 'e', '\0'};
    char str2[] = "Hello";
    printf("%s %s\n", str, str2);

    int i2 = 10;
    int *ptr_i2 = &i2;
    printf("%d %p %d\n", i2, ptr_i2, *ptr_i2);

    print_str(&str[0]);

    struct Person person = {10, "Hello"};

    printf("\n%d\n", person.age);

    print_person(&person);

    person_t p = {10};

    printf("\n%d\n", p.age);
    print_person_t(&p);

    int *ptr_ints = create_intss();

    printf("%d %p %p %d %p %d %p %d", *ptr_ints, ptr_ints, (++ptr_ints), *ptr_ints, (++ptr_ints), *ptr_ints, (++ptr_ints), *ptr_ints);

    return 0;
}