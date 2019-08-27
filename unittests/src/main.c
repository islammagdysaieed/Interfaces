#include <stdio.h>
#include "pot/stack.h"

int main(int argc, char const *argv[])
{
	Stack_T stk = stack_new();

	for (size_t i = 0; i < 4 ; i++)
	{
		stack_push(stk, (void*)i);
	}

	int a = (int)stack_pop(stk);
	int b = (int)stack_pop(stk);

	stack_free(stk);
	printf("fii");
	return 0;
}