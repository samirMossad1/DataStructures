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

		ptr_queue->ptr_front=NULL;
		ptr_queue->ptr_rear=NULL;
		ptr_queue->size=0;


	}

}


int Queue_append(const QueueItem* ptr_item,Queue* ptr_queue)
{


	if(ptr_queue != NULL && ptr_item != NULL)
	{

		QueueNode * ptr_node=(QueueNode*)malloc(sizeof(QueueNode));

		if(ptr_node == NULL)
		{
			return 0;
		}
		else
		{
			ptr_node->item=*(ptr_item);
			ptr_node->ptr_next=NULL;

			if(ptr_queue->ptr_rear != NULL)
			{
				ptr_queue->ptr_rear->ptr_next=ptr_node;
			}
			else
			{
				ptr_queue->ptr_front=ptr_node;
			}

			ptr_queue->ptr_rear=ptr_node;

			ptr_queue->size++;

		}

	}

	return 1;

}

void Queue_serve(QueueItem* ptr_item, Queue* ptr_queue)
{

	if(ptr_queue != NULL  && ptr_item != NULL)
	{

     if(ptr_queue->size != 0)
     {
		QueueNode* ptr_temporary=ptr_queue->ptr_front;
		ptr_queue->ptr_front=ptr_queue->ptr_front->ptr_next;

		(*ptr_item)=(ptr_temporary)->item;
		free(ptr_temporary);
     }
	}

	ptr_queue->size--;
}




void Queue_clear(Queue* ptr_queue)
{

	if(ptr_queue != NULL)
	{

		while(ptr_queue->ptr_front != NULL)
		{

			ptr_queue->ptr_rear=ptr_queue->ptr_front->ptr_next;
			free(ptr_queue->ptr_front);
			ptr_queue->ptr_front=ptr_queue->ptr_rear;

		}

		ptr_queue->size=0;

	}



}

void Queue_retrieveFirst(QueueItem* ptr_item,const Queue* ptr_queue)
{
	if(ptr_queue != NULL  && ptr_item != NULL)
	{

		*ptr_item=(ptr_queue->ptr_front)->item;
	}
}





void Queue_traverse(const Queue* ptr_queue , void (*ptr)(const QueueItem*))
{
	if( ptr_queue != NULL)
	{
		QueueNode* ptr_traverse=ptr_queue->ptr_front;

		while(ptr_traverse != NULL)
		{

			(*ptr)( & (ptr_traverse->item) );
			ptr_traverse=ptr_traverse->ptr_next;

		}


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

		return ptr_queue->size == 0 ;

	}
}

bool Queue_full(const Queue* ptr_queue)
{


	if(ptr_queue != NULL)
	{

		return 0;

	}

}


