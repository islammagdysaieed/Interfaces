#include <stdlib.h>

#include <assert.h>

#include "pot/stack.h"

#define NEW(t) (t*)malloc(sizeof(t));
#define FREE(t) {free(t); t = NULL; } 



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


void* stack_pop(Stack_T stk)
{
	assert(stk);
	assert(stk->count);
	
	void* ret;
	struct Node* tmp;

	tmp = stk->head;
	stk->head = tmp->next;
	ret = tmp->data;
	FREE(tmp);
	stk->count--;
	
	return ret;
}

int
stack_empty(Stack_T stk)
{
	assert(stk);
	return stk->count == 0;
}

void stack_free(Stack_T stk)
{
	assert(stk);
	struct Node *t, *u;

	for (t = stk->head; t; stk->head = t) {
		t = t->next;
		FREE(stk->head);
	}

	FREE(stk);
}