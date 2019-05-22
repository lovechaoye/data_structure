#include"MyStack.h"
#include<stdlib.h>
/*自定义栈的实现*/

int InitStack(IN pStack p, IN int length) {
	if ((p->bottom = (ElemType*)malloc(sizeof(ElemType) * length)) == NULL)
	{
		return ERROR;
	}
	p->top = p->bottom;
	p->length = 0;
	p->size = length;
	return OK;
}


int pop(IN pStack p, OUT  ElemType* e) {
	if (p->length <= 0)
	{
		return ERROR;
	}
	*e = *(p->top);
	p->length--;
	return OK;
}

int push(IN pStack p, IN  ElemType e) {
	if (p->length >= p->size)
	{
		return ERROR;
	}
	*(p->top) = e;
	p->length++;
	p->top++;
	return OK;
}

void destroyStack(IN pStack p) {
	free(p->bottom);
	p->bottom = NULL;
	p->top = NULL;
	p->size = 0;
	p->length = 0;
}

void showStack(IN pStack p) {
	int i = p->length - 1;
	while (i >= 0)
	{
		if (i == 0)
		{
			printf("%d\n", *(p->bottom + i));
			break;
		}
		printf("%d ", *(p->bottom + i));
		i--;
	}

}