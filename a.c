#include <stdio.h>

int main(int argc, const char * argv[]) {
    float altura, base, area;

    printf("Informe a altura e a base do tri�ngulo\n");
    scanf("%f %f", &altura, &base);

    area = (altura * base)/2;

    printf("A �rea do tri�ngulo �: %.2f\n", area);

    return 0;
}
