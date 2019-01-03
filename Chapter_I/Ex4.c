#include<stdio.h>

int main() {

    int lower, upper, step;
    float fahr, celsius;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    while (celsius <= upper) {
        fahr = celsius * 9.0 / 5.0 + 32;
        printf("%6.2f %3.0f \n", fahr, celsius);

        celsius = celsius + step;
    }
}

