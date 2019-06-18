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
//这里的数组会被当成循环数组来看待，通过两个值来控制，front指向队首元素，rear指向最后一个元素的下一个位置
//为了避免front=rear的二义性，即既有可能只队列满了，也有可能是队列是空的，将队列中最大能存取的数减1,也可以添加length属性，来作为标志
//顺序存储的队列必须想象成一个首尾相连的模型，虽然实际上并不是
int InitQueue(SqQueue* Q);

int QueueEmpty(SqQueue* Q);

int QueueLength(SqQueue* Q);

int QueueLength(SqQueue Q);

int EnQueue(SqQueue* Q,ElemType e);

int DeQueue(SqQueue* Q, ElemType* e);

int GetQueue(SqQueue* Q, ElemType* e);

int DestroyQueue(SqQueue* Q);