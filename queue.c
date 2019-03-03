/*
 * queue.c
 *
 *  Created on: Mar 2, 2019
 *      Author: Samir Mossad
 */


#include "queue.h"


void Queue_init(Queue* ptr_queue)
{

	if(ptr_queue != NULL)
	{

		ptr_queue->front=0;
		ptr_queue->rear=-1;
		ptr_queue->size=0;



	}




}


int Queue_append(const QueueItem* ptr_item,Queue* ptr_queue)
{



	if(ptr_queue != NULL && ptr_item != NULL)
	{

	if(ptr_queue->size == MAX_QUEUE)
	{
		return 0;
	}
	else
	{

		ptr_queue->rear=(ptr_queue->rear +1) % MAX_QUEUE;
		ptr_queue->item[(ptr_queue->rear)]=*ptr_item;
		ptr_queue->size++;
	}

	}
		return 1;
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


