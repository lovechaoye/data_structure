#include<stdio.h>
#include<stdlib.h>
#include<stdio.h>
#ifndef IN
#define IN
#endif // !IN

#ifndef OUT
#define OUT
#endif // !OUT

#ifndef OK
#define OK 1
#endif // !1

#ifndef	 ERROR
#define ERROR 0
#endif // !0


typedef char ElemType;

//��̬����ջ
typedef struct {
	ElemType* bottom;//ջ��ָ��
	ElemType* top;//ջ��ָ��
	int length;//ջ�е�Ԫ������
	int size;//ջ���������
}Stack, * pStack;

int InitStack(IN pStack p, IN int length);



int pop(IN pStack p, OUT  ElemType* e);

int push(IN pStack p, IN  ElemType e);

void destroyStack(IN pStack p);

void showStack(IN pStack p);
