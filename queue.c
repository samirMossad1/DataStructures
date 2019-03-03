/*
 * queue.c
 *
 *  Created on: Mar 2, 2019
 *      Author: Samir Mossad
 */


#include "queue.h"



void Queue_append(Queue* ptr_queue)
{


	if(ptr_queue != NULL)
	{

		ptr_queue->front=0;
		ptr_queue->rear=-1;
		ptr_queue->size=0;
	}

}



void Queue_Clear(Queue* ptr_queue)
{

	if(ptr_queue != NULL)
	{

		ptr_queue->front=0;
		ptr_queue->rear=-1;
		ptr_queue->size=0;
	}



}

void Queue_retrieveFirst(QueueItem* ptr_item,const Queue* ptr_queue)
{
	if(ptr_queue != NULL  && ptr_item != NULL)
	{

	*ptr_item=ptr_queue->item[ptr_queue->front];

	}
}


void Queue_traverse(const Queue* ptr_queue , void (*ptr)(QueueItem*))
{
	if( ptr_queue != NULL)
	{




	}

}












int Queue_size(const Queue* ptr_queue)
{

	if(ptr_queue != NULL)
	{

		return ptr_queue->size;
	}
}

bool Queue_emtpy(const Queue* ptr_queue)
{

	if(ptr_queue != NULL)
	{
		return ptr_queue->size==0;
	}
}

bool Queue_full(const Queue* ptr_queue)
{


	if(ptr_queue != NULL)
	{

		return ptr_queue->size==MAX_QUEUE;
	}

}


