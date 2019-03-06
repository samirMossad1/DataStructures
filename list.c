/*
 * list.c
 *
 *  Created on: Mar 6, 2019
 *      Author: Samir Mossad
 */

#include "list.h"


void List_init(List* ptr_list)
{
	if(ptr_list != NULL)
	{

		ptr_list->size=0;

	}
}


void List_insert(const int pos ,const ListItem * ptr_item,List* ptr_list)
{

	if(ptr_list != NULL && ptr_item != NULL && pos<ptr_list->size)
	{

		int i;

		ptr_list->size++;

		for(i=pos;i<ptr_list->size;i++)
		{

			ptr_list->item[i+1]=ptr_list->item[i];
		}

		ptr_list->item[pos]=*(ptr_item);
	}
}


void List_serveElement(const int pos,ListItem* ptr_item,List* ptr_list)
{
	if(ptr_list != NULL && ptr_item != NULL && pos<ptr_list->size)
	{

		int i;

		*(ptr_item)=ptr_list->item[pos];

		for(i=pos;i<ptr_list->size;i++)
		{

			ptr_list->item[i]=ptr_list->item[i+1];
		}

		ptr_list->size--;
	}

}

void List_retrieveElement(const int pos,ListItem* ptr_item,const List* ptr_list)
{
	if(ptr_list != NULL && ptr_item != NULL && pos<ptr_list->size)
	{

		*ptr_item=ptr_list->item[pos];
	}
}




void List_clear(List* ptr_list)
{
	if(ptr_list != NULL)
	{
		ptr_list->size=0;
	}
}



void List_traverse(const List* ptr_list,void(*ptr)(const ListItem*))
{
	if(ptr_list != NULL)
	{
		int i;
		for(i=0;i<ptr_list->size;i++)
		{

			(*ptr)(&(ptr_list->item[i]));

		}


	}

}


bool List_full(const List* ptr_list)
{

	if(ptr_list != NULL)
	{
		return ptr_list->size==MAX_LIST;

	}

}

bool List_empty(const List* ptr_list)
{
	if(ptr_list != NULL)
	{

	return ptr_list->size==LIST_START;

	}

}


int List_size(const List* ptr_list)
{
	if(ptr_list != NULL)
	{

	return ptr_list->size;
	}
}



