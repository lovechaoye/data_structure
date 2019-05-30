#include"LinkList.h"
#include<stdlib.h>
#include<stdio.h>
void InitLinkList(LinkList L) {
	L = (Node*)malloc(sizeof(Node));
	if (!L)
	{
		return;
	}
	L->next = NULL;
}

int LinkListlen(LinkList L) {
	Node* p;
	int i = 0;
	//p = L;
	//while ((p=p->next))
	//{
	//	i++;
	//}
	p = L->next;
	while (p)
	{
		p = p->next;
		i++;
	}
	return i;
}

Node* getElem_L(LinkList L, int i) {
	Node* p;
	p = L->next;
	int j = 1;
	while (p&&j<i)
	{
		p = p->next;
		j++;
	}
	if (i==j)
	{
		return p;
	}
	else
	{
		return NULL;
	}
}

Node* locateElem(LinkList L, ElemType x) {
	Node* p;
	p=L->next;
	while (p&&p->data!=x)
	{
		p = p->next;
	}
	if (p&&p->data==x)
	{
		return p;
	}
	return p;
}

int LinklistInsert_L(LinkList L, int i, ElemType x) {
	Node* p, * s;
	p = getElem_L(L,i-1);
	if (!p)
	{
		return ERROR;
	}
	s =(Node*) malloc(sizeof(Node));
	if (!s)
	{
		return ERROR;
	}
	s->data = x;
	s->next = p->next;
	p->next = s;
	return OK;
}

int LinklistDelete_L(LinkList L, int i) {
	Node* p,*q;
	p = getElem_L(L, i - 1);
	if (!p)
	{
		return ERROR;
	}
	q = p->next;
	p->next = q->next;
	free(q);
	return OK;
}

void ClearLinkList(LinkList L) {
	Node* p;
	while (L->next)
	{
		p = L->next;
		L->next = p->next;
		free(p);
	}
}

void DispLinkList(LinkList L) {
	Node* p;
	p = L->next;
	while (p)
	{
		printf("%d\n",p->data);
	}
}

void CreateLinkListHead(LinkList L, int n) {
	Node* p;
	int i = 0;
	while (i < n)
	{
		p = (Node*)malloc(sizeof(Node));
		if (!p)
		{
			return;
		}
		scanf("%d", &p->data);
		p->next = L->next;
		L->next = p;
		i++;
	}
}

void CreateLinkListTail(LinkList L, int n) {
	Node* p,*tail;
	int i = 0;
	tail = L;
	while (i<n)
	{
		p=(Node*)malloc(sizeof(Node));
		if (!p)
		{
			return;
		}
		scanf("%d",&p->data);
		tail->next = p;
		tail = p;
		i++;
	}
}