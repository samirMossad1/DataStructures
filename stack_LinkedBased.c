/*
 * stack_LinkedBased.c
 *
 *  Created on: Mar 2, 2019
 *      Author: Samir Mossad
 */

#include "stack_LinkedBased.h"

void Stack_init(Stack* ptr_stack)
{
	if(ptr_stack != NULL)
	{
		ptr_stack->ptr_head=NULL;
		ptr_stack->size=0;
	}

}

void Stack_push(const StackItem* ptr_stackItem,Stack* ptr_stack)
{
	if(ptr_stack != NULL && ptr_stackItem != NULL)
	{

		StackNode* ptr_node=(StackNode*)malloc(sizeof(StackNode));

		ptr_node->item=*ptr_stackItem;

		ptr_node->ptr_next=ptr_stack->ptr_head;

		ptr_stack->ptr_head=ptr_node;

		ptr_stack->size++;

	}

}

void Stack_pop(StackItem* ptr_stackItem,Stack* ptr_stack)
{

	if(ptr_stack != NULL && ptr_stackItem != NULL)
	{

		*ptr_stackItem=(ptr_stack->ptr_head)->item;

		StackNode* ptr_temp=ptr_stack->ptr_head;

		ptr_stack->ptr_head=ptr_stack->ptr_head->ptr_next;

		ptr_stack->size--;

		*ptr_stackItem=ptr_temp->item;

		free(ptr_temp);
	}

}

void Stack_retrieveTop(StackItem* ptr_stackItem, const Stack * ptr_stack)
{
	if(ptr_stack != NULL && ptr_stackItem != NULL)
	{
		*ptr_stackItem=(ptr_stack->ptr_head)->item;
	}

}


void Stack_display(const Stack* ptr_stack,void(*ptr_callBack)(StackItem* ptr_stackItem))
{


	if(ptr_stack != NULL )
	{
		StackNode * ptr_node=ptr_stack->ptr_head;

		while(ptr_node != NULL)
		{

			(*ptr_callBack)(&(ptr_node->item));
			ptr_node=ptr_node->ptr_next;

		}

	}

}

void Stack_clear(Stack * ptr_stack)
{
	if(ptr_stack != NULL )
	{
		StackNode * ptr_stackNodeNext=ptr_stack->ptr_head;
		StackNode * ptr_stackNodeCurrent=NULL;

		while(ptr_stackNodeNext != NULL)
		{
			ptr_stackNodeCurrent=ptr_stackNodeNext;
			ptr_stackNodeNext=ptr_stackNodeNext->ptr_next;
			free(ptr_stackNodeCurrent);

		}

		ptr_stack->ptr_head=NULL;
		ptr_stack->size=0;

	}

}

int Stack_size (const Stack * ptr_stack)
{

	if(ptr_stack != NULL )
	{

		return ptr_stack->size;

	}

}


bool Stack_empty(const Stack* ptr_stack)
{
	if(ptr_stack != NULL )
	{

		return ptr_stack->ptr_head==NULL;
	}

}

bool Stack_full(const Stack* ptr_stack)
{
	if(ptr_stack != NULL )
	{
		return 0;

	}

}
