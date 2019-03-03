/*
 * queue.h
 *
 *  Created on: Mar 2, 2019
 *      Author: Samir Mossad
 */

#ifndef QUEUE_H_
#define QUEUE_H_




#define MAX_QUEUE 	 3
#define QUEUE_START	 0
#define FALSE		 0u
#define TRUE 		 1U
#define NULL 		((void *) 0)

typedef char bool;


typedef struct queueitem
{
	char Name;
	int Age;
	char X;


}QueueItem;



typedef struct queue
{
  int front;
  int rear;
  QueueItem item[MAX_QUEUE];

}Queue;





void Queue_init(Queue*);

void Queue_append(const QueueItem*,Queue*);

void Queue_serve(QueueItem*,Queue*);

void Queue_serveFirst(QueueItem*,const Queue*);

void Queue_traverse(const Queue* , void (*ptr)(QueueItem*));

void Queue_Clear(Queue*);

int Queue_size(const Queue*);

bool Queue_emtpy(const Queue*);

bool Queue_full(const Queue*);






#endif /* QUEUE_H_ */
