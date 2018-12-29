#include<stdio.h>

double compute(double f) {
    return (f - 32) * 5 / 9;
}

int main() {
    int f = 0;
    double c = 0;

    while (f <= 160) {
        printf("%4d %4.0f", f, compute((double)f) );
    }

}

