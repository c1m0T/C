#include <stdio.h>

int main(){

    /* calculations to add 20% of tax
    on top of varying user input */

    double value;

    scanf("%lf", &value);

    double tax = 20;
    double taxValue = (value * tax) / 100;
    double totalValue = value + taxValue;

    printf(": With tax: %.2lf", totalValue);
    return 0;
}
