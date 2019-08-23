#include <stdlib.h>

#include <assert.h>

#include "pot/stack.h"

#define NEW(t) (t*)malloc(sizeof(t));

struct Stack_T
{
	int count;

	struct Node
	{
		void* data;
		struct Node* next;
	}*head;
};

Stack_T stack_new(void)
{
	Stack_T self = NEW(Stack_T);
	self->count = 0;
	self->head = NULL;

	return self;
}

void stack_push(Stack_T stk, void* data)
{
	assert(stk);

	struct Node* tmp = NEW(struct Node);
	tmp->data = data;
	tmp->next = stk->head;
	stk->head = tmp;
	stk->count++;
}


void *stack_pop(Stack_T stk)
{
	assert(stk);
	assert(stk->count);
	void* ret= stk->head->data;

}
void stack_free(Stack_T* stk)
{
	assert(stk);
	free(stk);
}