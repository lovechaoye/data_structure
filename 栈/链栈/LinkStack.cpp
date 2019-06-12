#include"LinkStack.h"

int InitStack(LinkStack* s) {
	StackNode* p;
	p = (StackNode*)malloc(sizeof(StackNode));
	if (p==NULL)
	{
		return ERROR;
	}
	p->next = NULL;
	*s = p;
	return OK;
}

int StackEmpty(LinkStack* s) {
	return ((*s) == NULL) ? 0 : 1;
}

int push(LinkStack* s, ElemType e) {
	StackNode* p,*top;
	top = *s;
	p = (StackNode*)malloc(sizeof(StackNode));
	if (p == NULL)
	{
		return ERROR;
	}
	p->data = e;
	p->next = top;
	(*s) = p;
	return	OK;
}

ElemType pop(LinkStack* s) {
	StackNode * top;
	top = *s;
	ElemType ret = top->data;
	(*s) = top->next;
	free(top);
	return ret;
}

ElemType GetTop(LinkStack* s) {
	return (*s)->data;
}

int DestroyStack(LinkStack* s) {
	StackNode* p,*top;
	top = *s;
	while (top)
	{
		p = top->next;
		free(top);
		top = p;
	}
	return OK;
}