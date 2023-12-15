#include <stdio.h>
#include <stdlib.h>

int get_age();
void det_age(int age);
void death(int age);

int main()
{
    int age = get_age();
    det_age(age);
    death(age);
}

int get_age(){

    int age;

    printf("What is your age: ");
    scanf("%d", &age);
    printf("hello %d year old \n", age);
    return age;
}

void det_age(int age){
    if (age < 18)
    {
        printf ("%d is not old enough \n", age);
    }
    else if (age > 100)
    {
        printf("error: age is larger than 100\n ");
        exit(1);
    }
    else 
    {
        printf ("%d is old enough \n", age);
    }
}

void death(int age){
    int death = 100 - age;
    printf("you will die in %d years \n", death);
}