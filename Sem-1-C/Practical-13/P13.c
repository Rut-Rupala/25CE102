#include <stdio.h>

int main() {
    int tank = 0;               // initial water level
    int capacity = 100;         // maximum capacity
    int refillRate = 10;        // liters per minute
    printf("Rut Rupala, 25CE102!\n");
    while (tank < capacity) {
        tank += refillRate;     // add water
        if (tank > capacity) {  // just in case overfills
            tank = capacity;
        }
        printf("Current water level: %d liters\n", tank);
    }

    printf("Tank is full.\n");

    return 0;
}
