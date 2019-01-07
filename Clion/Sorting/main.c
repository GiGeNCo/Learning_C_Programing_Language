#include <stdio.h>
#include <stdlib.h>
typedef struct stack
{
    int maxsize;
    int top;
    int *items;
} Stack;
void init(Stack **stk, int size)
{
    if (*stk == NULL)
        *stk = (Stack *)malloc(sizeof(Stack));
    (*stk)->items = (int *)calloc(size, sizeof(int));
    (*stk)->maxsize = size;
    (*stk)->top = 0;
}
void push(Stack *stk, int data)
{
    if (stk->top == stk->maxsize)
        printf("Stack is Full!\n");
    else
    {
        stk->items[stk->top] = data;
        stk->top++;
    }
}
int pop(Stack *stk)
{
    if (stk->top == 0)
        printf("Stack is empty!\n");
    else
        return stk->items[stk->top--];
    return -1;
}
void peek(Stack *stk)
{
    if (stk->top == 0)
        printf("Stack is empty!\n");
    else
        printf("%d\n", stk->items[stk->top - 1]);
}
int main(int argc, char const *argv[])
{
    Stack *stck = NULL;
    init(&stck, 10);
    push(stck, 3);
    push(stck, 4);
    push(stck, 5);
    pop(stck);
    peek(stck);
    return 0;
}