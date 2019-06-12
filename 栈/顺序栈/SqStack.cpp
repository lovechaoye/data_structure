#include"SqStack.h"

int InitStack(SqStack* s) {
	ElemType* p;
	p = (ElemType*)malloc(sizeof(ElemType) * STACK_INIT_SIZE);
	if (p == NULL)
	{
		return ERROR;
	}
	s->data = p;
	s->stacksize = STACK_INIT_SIZE;
	s->top = -1;
	return OK;
}

int StackEmpty(SqStack* s) {
	return s->top == -1 ? 0 : 1;
}

int push(SqStack* s, ElemType e) {
	ElemType* p;
	if (s->top >= (s->stacksize - 1))
	{
		p = (ElemType*)realloc(s->data, sizeof(ElemType) * (s->stacksize + STACK_INCREMENT));
		if (p == NULL)
		{
			return ERROR;
		}
		s->data = p;
		s->stacksize += STACK_INCREMENT;
	}
	s->data[++s->top] = e;
	return OK;
}

int pop(SqStack* s, ElemType* e) {
	if (s->top == -1)
	{
		return ERROR;
	}
	*e = s->data[s->top--];
	return OK;
}

ElemType GetTop(SqStack* s) {
	if (s->top == -1)
	{
		return ERROR;
	}
	return s->data[s->top];
}

int DestroyStack(SqStack* s) {
	free(s->data);
	return OK;
}