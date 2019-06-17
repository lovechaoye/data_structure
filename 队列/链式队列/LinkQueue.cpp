#include"LinkQueue.h"
LinkQueue InitLinkQueue() {//��ʼ��һ�����У��ȳ�ʼ�����ı�ͷָ��
	LinkQueue Q;
	Qnode* p;
	p=(Qnode*)malloc(LENG);
	Q.front = Q.rear = p;
	Q.front->next = NULL;
	return Q;
}

//������߷��ؽṹ�壬����и�����ڴ渴��
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

LinkQueue DelQueue(LinkQueue Q, ElemType* e) {
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

int DelQueue(LinkQueue* Q, ElemType* e) {
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
