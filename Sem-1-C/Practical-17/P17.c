#include <stdio.h>

int main() {
    int minute = 0;
    double distance = 0.0;
    printf("Rut Rupala, 25CE102!\n");

    while (1) {  // infinite loop
        minute++;
        distance += 0.5;  // runner covers 0.5 km each minute

        printf("Minute %d: Distance covered = %.1f km\n", minute, distance);

        if (distance >= 10.0) {   // break condition
            printf("Marathon complete!\n");
            break;
        }
    }

    return 0;
}
