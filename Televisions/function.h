#ifndef FUNCTION_H
#define FUNCTION_H
struct Television {
    char brand[40];
    float inches;
    float cost;
};
void showTelevisions(struct Television *tvArray, int arraySize);
void printTelevisions(struct Television *tvArray, int arraySize);
#endif

