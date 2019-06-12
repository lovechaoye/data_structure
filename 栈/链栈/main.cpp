//#include"SqStack.h"
#include"LinkStack.h"
#include<stdio.h>
void testSqStack();
void testLinkStack();
int main() {

	testLinkStack();
	return 0;
}


//void testSqStack() {
//	SqStack s;
//	InitStack(&s);
//	printf("stack is empty %d\n", StackEmpty(&s));
//	push(&s, 1);
//	push(&s, 2);
//	push(&s, 3);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	push(&s, 4);
//	printf("stack top is  %d\n", GetTop(&s));
//	printf("stack pop is  %d\n", pop(&s));
//	printf("stack pop is  %d\n", pop(&s));
//	printf("stack pop is  %d\n", pop(&s));
//	printf("stack pop is  %d\n", pop(&s));
//	printf("stack pop is  %d\n", pop(&s));
//}

void testLinkStack() {
	LinkStack s;
	InitStack(&s);
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);
	push(&s, 4);
	int t=GetTop(&s);
	printf("stack is empty %d\n", StackEmpty(&s));
	
	pop(&s);

	//DestroyStack(&s);
	//pop(&s);
	//pop(&s);
	//pop(&s);
}