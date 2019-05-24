#include"Linklist.h"
#include<stdlib.h>
#include<stdio.h>
#define _CRT_SECURE_NO_DEPRECATE
int InitLinkList(Linklist L) {
	Node* head = (Node*)malloc(sizeof(Node));
	if (!head)
	{
		return ERROR;
	}
	head->next = NULL;

	return OK;
}

//因为返回的指针都在堆中,所以可以返回指针
Node*  CreateLinkList1() {
	Node *head,*tail,*p;
	int e;
	head = (Node*)malloc(sizeof(Node));
	tail = head;
	scanf("%d", &e);
	while (e!=0)
	{
		p=(Node*)malloc(sizeof(Node));
		p->data = e;
		tail->next = p;
		tail = p;
		scanf("%d",&e);
		
	}
	tail->next = NULL;
	return head;
}

Node* CreateLinkList2() {
	Node* head, * p;
	head = (Node*)malloc(sizeof(Node));
	head->next = NULL;
	int e;
	scanf("%d", &e);
	while (e != 0)
	{
		p = (Node*)malloc(sizeof(Node));
		p->data = e;
		p->next = head->next;
		head->next = p;
		scanf("%d", &e);
	}
	return head;
}