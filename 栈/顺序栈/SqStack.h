#pragma once
#include<stdlib.h>
#define STACK_INIT_SIZE 10//�洢�ռ�ĳ�ʼ������
#define STACK_INCREMENT 10//�洢�ռ��������
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