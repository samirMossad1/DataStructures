/*
 * stack.c
 *
 *  Created on: Mar 1, 2019
 *      Author: Samir Mossad
 */


#include "stack.h"



void Stack_init(Stack* ptr_stack)
{
	if(ptr_stack != NULL)
	{
		ptr_stack->top=0;
	}

}

void Stack_push(const StackItem* item,Stack* ptr_stack)
{
	if(ptr_stack != NULL && item != NULL)
	{

		ptr_stack ->item[ptr_stack -> top]=*item;
		ptr_stack -> top ++;

	}
}


void Stack_pop(StackItem* item,Stack* ptr_stack)
{

	if(ptr_stack != NULL && item != NULL)

	{
		ptr_stack->top--;
		*item=ptr_stack ->  item[ptr_stack->top];

	}

}


void Stack_retrieveTop(StackItem* item, const Stack * ptr_stack)
{

	if(ptr_stack != NULL && item != NULL)
	{

		*item= ptr_stack->item[(ptr_stack->top)-1];

	}

}


void Stack_display(const Stack* ptr_stack,void(*ptr_callBack)(StackItem*))
{

	if(ptr_stack != NULL && ptr_callBack != NULL)
	{

		for(unsigned int i=ptr_stack->top ; i>0 ; i--)
		{

			(*ptr_callBack)(&(ptr_stack->item[(i)-1]));
		}

	}


}


int Stack_size (const Stack * ptr_stack)
{
	if(ptr_stack != NULL)
	{

		return ptr_stack->top;

	}

}


bool Stack_empty(const Stack* ptr_stack)
{

	if( ptr_stack != NULL)
	{

		return ptr_stack->top == STACK_START ;

	}
}

bool Stack_full(const Stack* ptr_stack)
{

	if( ptr_stack != NULL)
	{

		return ptr_stack->top == MAX_STACK ;


	}
}


void Stack_clear(Stack * ptr_stack)
{

	if( ptr_stack != NULL)
	{
		ptr_stack->top=0;
	}

}
