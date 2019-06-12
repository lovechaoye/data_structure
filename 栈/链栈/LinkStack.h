#pragma once
#include<stdlib.h>
#define OK 1
#define ERROR 0
typedef int ElemType;
typedef struct node {
	ElemType data;
	node* next;
}StackNode, * LinkStack;

int InitStack(LinkStack* top);

int StackEmpty(LinkStack* top);

int push(LinkStack* top, ElemType e);

int pop(LinkStack* top, ElemType* e);

ElemType GetTop(LinkStack* top, ElemType* e);

int DestroyStack(LinkStack* top);