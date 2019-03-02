/*
 * stack.h
 *
 *  Created on: Mar 1, 2019
 *      Author: Samir Mossad
 */


#ifndef STACK_H_
#define STACK_H_

#define MAX_STACK 	 3
#define STACK_START	 0
#define FALSE		 0u
#define TRUE 		 1U
#define NULL 		((void *) 0)

typedef char bool;

////////////////////////////////////////////////////////
typedef struct stackentry
{

	char Name;
	int Age;
    char X;

}StackItem;
////////////////////////////////////////////////////////


typedef struct stack
{

	int top;

    StackItem item[MAX_STACK];


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







#endif /* STACK_H_ */
