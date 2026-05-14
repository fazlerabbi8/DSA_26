#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
   int top;
   int capacity;
   int *array;
} Stack;


Stack*  createStack(int capacity)
{
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));
    return stack;
}