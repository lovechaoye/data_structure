#pragma once
#include<stdlib.h>
#include<stdio.h>
#define LENG sizeof(Qnode)
#define OK 1
#define ERROR 0 
typedef int ElemType;

typedef struct Qnode{
	ElemType data;
	Qnode* next;
}Qnode,*QueuePtr;

typedef struct {
	Qnode* front;//Õ∑÷∏’Î
	Qnode* rear;//Œ≤÷∏’Î
}LinkQueue;

LinkQueue InitLinkQueue();

LinkQueue EnQueue(LinkQueue Q, ElemType e);

int EnQueue(LinkQueue* Q, ElemType e);

LinkQueue DelQueue(LinkQueue Q,ElemType* e);


int DelQueue(LinkQueue* Q, ElemType* e);