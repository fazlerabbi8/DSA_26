#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int top;
    int capacity;
    int *array;
} Stack;

Stack *createStack(int capacity)
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}

int isFull(Stack *stack)
{
    return stack->top == stack->capacity - 1;
}

int isEmpty(Stack *stack)
{
    return stack->top == -1;
}

void push(Stack *stack, int value)
{
    if (isFull(stack))
    {
        printf("Stack Overflow! Stack is full.\n");
        return;
    }

    stack->array[++stack->top] = value;
    printf("%d pushed to stack\n", value);
}

void displayStack(Stack *stack)
{
    if (isEmpty(stack))
    {
        printf("Stack is empty\n");
    }
    else
    {
        for (int x = stack->top; x >= 0; x--)
        {
            printf("%d\n", stack->array[x]);
        }
    }
}

int main()
{
    Stack *stack = createStack(50);

    push(stack, 5);
    push(stack, 6);
    push(stack, 7);
    push(stack, 8);
    push(stack, 9);

    printf("-----------\n");

    displayStack(stack);

    return 0;
}
