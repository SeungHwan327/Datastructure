/*
* File: Training8-7.c
* Date: 2024.02.23
* Author: Lee seung hwan
* Summary of file : Bundle of function(Header part) using to Training8-8, 8-9.c
* 
#ifndef ___CircDblLinkedList
#define ___CircDblLinkedList
#include "Member.h"

typedef struct __node {
	Member data;
	struct __node* prev;
	struct __node* next;
} Dnode;

typedef struct {
	Dnode* head;
	Dnode* crnt;
} Dlist;

void Initialize(Dlist* list);
void PrintCurrent(const Dlist* list);
void PrintLnCurrent(const Dlist* list);
Dnode* Search(Dlist* list, const Member* x, int compare(const Member* x, const Member* y));
void Print(const Dlist* list);
void PrintReverse(const Dlist* list);
int Next(Dlist* list);
int Prev(Dlist* list);
void InsertAfter(Dlist* list, Dnode* p, const Member* x);
void InsertFront(Dlist* list, const Member* x);
void InsertRear(Dlist* list, const Member* x);
void Remove(Dlist* list, Dnode* p);
void RemoveFront(Dlist* list);
void RemoveRear(Dlist* list);
void RemoveCurrent(Dlist* list);
void Clear(Dlist* list);
void Terminate(Dlist* list);
#endif
*/