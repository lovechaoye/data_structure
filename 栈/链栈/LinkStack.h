#pragma once
#include<stdlib.h>
#define OK 1
#define ERROR 0
typedef int ElemType;
typedef struct node {
	ElemType data;
	node* next;
}StackNode, * LinkStack;

int InitStack(LinkStack* s);

int StackEmpty(LinkStack* s);

int push(LinkStack* s, ElemType e);

ElemType pop(LinkStack* s);

ElemType GetTop(LinkStack* s);

int DestroyStack(LinkStack* s);