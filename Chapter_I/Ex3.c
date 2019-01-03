#include<stdio.h>

int main() {

    printf("%3s %6s \n", "fahr", "celsius");
    printf("--- ------ \n");

    float fahr, celsious;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsious = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %6.2f\n", fahr, celsious);

        fahr = fahr + step;
    }
}
