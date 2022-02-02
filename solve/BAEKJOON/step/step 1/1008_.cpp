#include <stdio.h>

int main(int argc, char const* argv[]) {
    double a, b;

    scanf("%lf %lf", &a, &b);
    printf("%.13lf", a / b);
    return 0;
}