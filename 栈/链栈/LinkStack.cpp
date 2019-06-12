#include"LinkStack.h"

int InitStack(LinkStack* top) {
	*top = NULL;
	return OK;
}

int StackEmpty(LinkStack* top) {
	return ((*top) == NULL) ? OK : ERROR;
}

int push(LinkStack* top, ElemType e) {
	StackNode* p;
	p = (StackNode*)malloc(sizeof(StackNode));
	if (p == NULL)
	{
		return ERROR;
	}
	p->data = e;
	p->next = *top;
	(*top) = p;
	return	OK;
}

int pop(LinkStack* top, ElemType* e) {
	StackNode * p;
	if (*top==NULL)
	{
		return ERROR;
	}
	p = *top;
	*e= p->data;
	(*top) = p->next;
	free(p);
	return OK;
}

int GetTop(LinkStack* top, ElemType* e) {
	if (top==NULL)
	{
		return ERROR;
	}
	*e=(*top)->data;
	return OK;
}

int DestroyStack(LinkStack* top) {
	StackNode* p;
	while (*top)
	{
		p = (*top)->next;
		free(*top);
		*top = p;
	}
	return OK;
}