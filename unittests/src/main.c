#include <stdio.h>
#include "pot/stack.h"

int main(int argc, char const *argv[])
{
	Stack_T stk = stack_new();
	stack_free(stk);

	return 0;
}