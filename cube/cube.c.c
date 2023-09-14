#include <stdio.h>

int main() {

    /* scanner code to calculate the surfaceArea
    and the volume of a cube using varying user input */

    int number;
    int surfaceArea;
    int volume;

    scanf("%d", &number);

    surfaceArea= 6 * number * number;
    volume= number * number * number;

    printf(": Surface area: %d\n", surfaceArea);
    printf("Volume: %d\n", volume);
    return 0;

}

