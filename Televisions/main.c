#include <stdio.h>
#include "function.h"

int main() 
{
    int arraySize = 10;
    struct Television tvArray[arraySize];
   
    showTelevisions(tvArray, arraySize);
    printTelevisions(tvArray, arraySize);
    return 0;
}

