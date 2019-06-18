#include"LinkQueue.h"
LinkQueue InitLinkQueue() {//初始化一个队列，先初始化它的表头指针
	LinkQueue Q;
	Qnode* p;
	p=(Qnode*)malloc(LENG);
	Q.front = Q.rear = p;
	Q.front->next = NULL;
	return Q;
}

int InitLinkQueue(LinkQueue* Q) {
	QNode* p;
	p = (Qnode*)malloc(LENG);
	if (p==NULL)
	{
		return ERROR;
	}
	p->next = NULL;
	Q->front = Q->rear = p;
	return OK;
}

//传入或者返回结构体，会进行更大的内存复制
LinkQueue EnQueue(LinkQueue Q, ElemType e) {
	Qnode* p;
	p=(Qnode*)malloc(LENG);
	if (p==NULL)
	{
		return Q;
	}
	p->data = e;
	p->next = NULL;
	Q.rear->next = p;
	Q.rear = p;
	return Q;
}

int EnQueue(LinkQueue* Q, ElemType e) {
	Qnode* p;
	p = (Qnode*)malloc(LENG);
	if (p == NULL)
	{
		return ERROR;
	}
	p->data = e;
	p->next = NULL;
	Q->rear->next = p;
	Q->rear = p;
	return OK;
}

LinkQueue DeQueue(LinkQueue Q, ElemType* e) {
	Qnode* p;
	if (Q.front==Q.rear)
	{
		printf("Empty queue\n");
		return Q;
	}
	p = Q.front->next;
	*e = p->data;
	Q.front->next = p->next;
	if (p->next==NULL)
	{
		Q.rear = Q.front;
	}
	free(p);
	return Q;
}


int DeQueue(LinkQueue* Q, ElemType* e) {
	Qnode* p;
	if (Q->front == Q->rear)
	{
		printf("Empty queue\n");
		return ERROR;
	}
	p = Q->front->next;
	*e = p->data;
	Q->front->next = p->next;
	if (p->next == NULL)
	{
		Q->rear = Q->front;
	}
	free(p);
	return OK;
}

int DeQueueV2(LinkQueue* Q, ElemType* e) {
	Qnode* head,*first;
	if (Q->front == Q->rear)
	{
		printf("Empty queue\n");
		return ERROR;
	}
	head = Q->front;
	first = head->next;
	*e = first->data;
	free(head);
	Q->front = first;
	return OK;
}

int GetQueue(LinkQueue* Q, ElemType* e) {
	if (Q->front==Q->rear)
	{
		printf("Empty queue\n");
		return ERROR;
	}
	*e = Q->front->next->data;
	return OK;
}

int DestroyQueue(LinkQueue* Q) {
	while (Q->front)
	{
		Q->rear = Q->front->next;
		free(Q->front);
		Q->front = Q->rear;
	}
	return OK;
}