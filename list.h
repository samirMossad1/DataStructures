/*
 * list.h
 *
 *  Created on: Mar 6, 2019
 *      Author: Samir Mossad
 */

#ifndef LIST_H_
#define LIST_H_

#define MAX_LIST 	 3
#define LIST_START 	 0
#define FALSE		 0u
#define TRUE 		 1U
#define NULL 		((void *) 0)

typedef char bool;





typedef struct listitem
{
	int num;
	char Name;


}ListItem;



typedef struct list
{
	ListItem item[MAX_LIST];
	int size;

}List;



void List_init(List*);
void List_insert(const int,const ListItem *,List*);
void List_serveElement(const int,ListItem*,List*);
void List_retrieveElement(const int,ListItem*,const List*);
void List_clear(List*);
void List_traverse(const List*,void(*ptr)(const ListItem*));
bool List_full(const List*);
bool List_empty(const List*);
int List_size(const List*);





#endif /* LIST_H_ */
