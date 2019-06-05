#include"DuLNode.h"

void InitDuLinkList(DuLinkList* L) {
	DuLNode* header = (DuLNode*)malloc(sizeof(DuLNode));
	if (header == NULL)
	{
		printf("init failed!!!");
		return;
	}
	header->next = NULL;
	header->prior = NULL;
	*L = header;
}

DuLNode* GetElem_L(DuLinkList L, int i) {
	DuLNode* p;
	int j = 1;
	p = L->next;
	while (p != NULL && j < i)
	{
		p = p->next;
		j++;
	}
	if (j == i && p != NULL)
	{
		return p;
	}
	else {
		return NULL;
	}
}

int DuLinkListInsert(DuLinkList L, int i, ElemType x) {
	DuLNode* p, * s;
	p = GetElem_L(L, i);
	if (p == NULL)
	{
		return ERROR;
	}
	s = (DuLNode*)malloc(sizeof(DuLNode));
	if (s == NULL)
	{
		return ERROR;
	}
	s->data = x;
	s->prior = p->prior;
	s->next = p;
	p->prior->next = s;
	p->prior = s;
	
	return OK;
}

int DuLinkListDelete(DuLinkList L, int i) {
	DuLNode* p;
	p = GetElem_L(L, i);
	if (p == NULL)
	{
		return ERROR;
	}
	p->prior->next = p->next;
	free(p);
	return OK;
}

void CreateDuLinListHead(DuLinkList L, int n) {
	DuLNode* p;
	int i = 0;
	while (i < n)
	{
		p = (DuLNode*)malloc(sizeof(DuLNode));
		if (p == NULL)
		{
			return;
		}
		scanf("%d", &p->data);
		p->next = L->next;
		p->prior = L;
		if (L->next!=NULL)
		{
			L->next->prior = p;
		}
		L->next = p;
		i++;
	}
}

void CreateDuLinListTail(DuLinkList L, int n) {
	DuLNode* p, * tail;
	tail = L;
	int i = 0;
	while (i < n) {
		p = (DuLNode*)malloc(sizeof(DuLNode));
		if (p == NULL)
		{
			return;
		}
		scanf("%d", &p->data);
		tail->next = p;
		p->prior = tail;
		p->next = NULL;
		tail = p;
		i++;
	}
}

int DuLinkListlen(DuLinkList L) {
	int length = 0;
	DuLNode* p;
	p = L->next;
	while (p)
	{
		length++;
		p = p->next;
	}
	return length;
}

DuLNode* locateElem(DuLinkList L, ElemType x) {
	DuLNode* p;
	p = L->next;
	while (p && p->data != x)
	{
		p = p->next;
	}
	if (p&&p->data==x)
	{
		return p;
	}
	else
	{
		return NULL;
	}
}

void ClearDuLinkList(DuLinkList L) {
	DuLNode* p;
	while (p=L->next)
	{
		L->next = p->next;
		free(p);
	}
}

void DispDuLinkList(DuLinkList L) {
	DuLNode* p;
	p = L->next;
	while (p)
	{
		printf("%d ",p->data);
		p = p->next;
	}
}