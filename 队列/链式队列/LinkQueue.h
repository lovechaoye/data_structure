#pragma once
#include<stdlib.h>
#include<stdio.h>
#define LENG sizeof(Qnode)
#define OK 1
#define ERROR 0 
typedef int ElemType;

typedef struct QNode {
	ElemType data;
	QNode* next;
}Qnode,*QueuePtr;

typedef struct {
	Qnode* front;//Õ∑÷∏’Î
	Qnode* rear;//Œ≤÷∏’Î
}LinkQueue;

LinkQueue InitLinkQueue();

int InitLinkQueue(LinkQueue* Q);

LinkQueue EnQueue(LinkQueue Q, ElemType e);

int EnQueue(LinkQueue* Q, ElemType e);

LinkQueue DelQueue(LinkQueue Q,ElemType* e);


int DeQueue(LinkQueue* Q, ElemType* e);

int QueueEmpty(LinkQueue* Q);

int GetQueue(LinkQueue* Q, ElemType* e);

int DestroyQueue(LinkQueue* Q);