/*
 * stack_LinkedBased.h
 *
 *  Created on: Mar 2, 2019
 *      Author: Samir Mossad
 */

#ifndef STACK_LINKEDBASED_H_
#define STACK_LINKEDBASED_H_



#define MAX_STACK 	 3
#define STACK_START	 0
#define FALSE		 0u
#define TRUE 		 1U
#define NULL 		((void *) 0)

typedef char bool;


typedef struct stackitem
{
	char Name;
	int Age;
	char X;


}StackItem;

typedef struct stacknode
{
  StackItem item;
  struct stacknode * ptr_next;

}StackNode;



typedef struct stack
{
    StackNode * ptr_head;
    int 		size;

}Stack;





void Stack_init(Stack*);

void Stack_push(const StackItem*,Stack*);

void Stack_pop(StackItem*,Stack*);

void Stack_retrieveTop(StackItem*, const Stack *);

void Stack_display(const Stack*,void(*ptr)(StackItem*));

void Stack_clear(Stack *);

int Stack_size (const Stack *);

bool Stack_empty(const Stack*);

bool Stack_full(const Stack*);



#endif /* STACK_LINKEDBASED_H_ */
