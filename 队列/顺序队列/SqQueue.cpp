#include"SqQueue.h"
int InitQueue(SqQueue* Q) {
	ElemType* p;
	p=(ElemType*) malloc(sizeof(ElemType) * MAXSIZE);
	if (p==NULL)
	{
		return ERROR;
	}
	Q->base = p;
	Q->front = Q->rear = 0;
	return OK;
}

int QueueEmpty(SqQueue* Q) {
	if (Q->front==Q->rear)
	{
		return OK;
	}
	return ERROR;
}

int QueueLength(SqQueue* Q) {
	return (Q->rear - Q->front + MAXSIZE) % MAXSIZE;
}

int QueueLength(SqQueue Q) {
	return (Q.rear - Q.front + MAXSIZE) % MAXSIZE;
}

int EnQueue(SqQueue* Q, ElemType e) {
	if ((Q->rear+1)%MAXSIZE==Q->front)
	{
		printf("Queue is full\n");
		return ERROR;
	}
	Q->base[Q->rear] = e;
	Q->rear = (Q->rear + 1) % MAXSIZE;
	return OK;
}

int DeQueue(SqQueue* Q, ElemType* e) {
	if (Q->front==Q->rear)
	{
		printf("Queue is Empty\n");
		return ERROR;
	}
	*e = Q->base[Q->front];
	Q->front = (Q->front + 1) % MAXSIZE;
	return OK;
}

int GetQueue(SqQueue* Q, ElemType* e) {
	if (Q->front == Q->rear)
	{
		printf("Queue is Empty\n");
		return ERROR;
	}
	*e = Q->base[Q->front];
	return OK;
}

int DestroyQueue(SqQueue* Q) {
	free(Q->base);
	return OK;
}