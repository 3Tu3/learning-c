#include <stdio.h>
#include <stdlib.h>

int reps();
int weight();
int calc(int reps, int weight);

int main() {
    int r = reps();
    int w = weight();
    calc(r, w);
    return 0;
}

int reps() {
    int reps;
    printf("Input the number of reps: ");
    scanf("%d", &reps);
    return reps;
}

int weight(){
    int weight;
    printf("Input the amount of weight in kg: ");
    scanf("%d", &weight);
    return weight;
}

int calc(int reps, int weight) {
    int a = reps * 2.5;
    printf("a = %d\n", a);

    int b = 100 - a;
    printf("b = %d\n", b);

    float c = (float) b / 100;
    printf("c = %f\n", c);

    float rm = (float)weight / c;
    printf("1RM = %f\n", rm);
}
