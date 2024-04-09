#include <stdio.h>
#include "function.h"

void showTelevisions(struct Television *tvArray, int arraySize) 
{
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Television %d:\n", i + 1);
        printf("Brand: ");
        scanf("%s", tvArray[i].brand);
        printf("Inches: ");
        scanf("%f", &tvArray[i].inches);
        printf("Cost: ");
        scanf("%f", &tvArray[i].cost);
    }
}

void printTelevisions(struct Television *tvArray, int arraySize) {
    printf("\nTelevision Details:\n");
    for (int i = 0; i < arraySize; i++) 
    {
        printf("Television %d:\n", i + 1);
        printf("Brand: %s\n", tvArray[i].brand);
        printf("Inches: %.1f\n", tvArray[i].inches);
        printf("Cost: $%.2f\n", tvArray[i].cost);
    }
}


