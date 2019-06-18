#pragma once
#include<stdlib.h>
#include<stdio.h>
#define MAXSIZE 5
#define OK 1
#define ERROR 0 
typedef int ElemType;
typedef struct {
	ElemType* base;
	int front;
	int rear;
}SqQueue;
//���������ᱻ����ѭ��������������ͨ������ֵ�����ƣ�frontָ�����Ԫ�أ�rearָ�����һ��Ԫ�ص���һ��λ��
//Ϊ�˱���front=rear�Ķ����ԣ������п���ֻ�������ˣ�Ҳ�п����Ƕ����ǿյģ�������������ܴ�ȡ������1,Ҳ�������length���ԣ�����Ϊ��־
//˳��洢�Ķ��б��������һ����β������ģ�ͣ���Ȼʵ���ϲ�����
int InitQueue(SqQueue* Q);

int QueueEmpty(SqQueue* Q);

int QueueLength(SqQueue* Q);

int QueueLength(SqQueue Q);

int EnQueue(SqQueue* Q,ElemType e);

int DeQueue(SqQueue* Q, ElemType* e);

int GetQueue(SqQueue* Q, ElemType* e);

int DestroyQueue(SqQueue* Q);