#pragma once
#include<stdlib.h>
#define STACK_INIT_SIZE 10//存储空间的初始分配量
#define STACK_INCREMENT 10//存储空间分配增量
#define OK 1
#define ERROR 0
typedef int ElemType;
typedef struct SqStack {
	ElemType* data;
	int top;
	int stacksize;
}SqStack,*pSqStack;

int InitStack(SqStack * s);

int StackEmpty(SqStack* s);

int push(SqStack* s,ElemType e );

ElemType pop(SqStack* s);

ElemType GetTop(SqStack* s);

int DestroyStack(SqStack* s);