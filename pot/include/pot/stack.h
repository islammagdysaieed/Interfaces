#ifndef STACK_INCLUDED
#define STACK_INCLUDED

typedef struct Stack_T* Stack_T;

Stack_T stack_new();

void stack_push(Stack_T stk, void* value);

void *stack_pop(Stack_T stk);

int stack_empty(Stack_T stk);

void stack_free(Stack_T* stk);

#endif
