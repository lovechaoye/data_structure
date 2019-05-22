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

//动态分配栈
typedef struct {
	ElemType* bottom;//栈底指针
	ElemType* top;//栈顶指针
	int length;//栈中的元素数量
	int size;//栈的最大容量
}Stack, * pStack;

int InitStack(IN pStack p, IN int length);



int pop(IN pStack p, OUT  ElemType* e);

int push(IN pStack p, IN  ElemType e);

void destroyStack(IN pStack p);

void showStack(IN pStack p);
