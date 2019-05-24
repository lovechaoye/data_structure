#pragma once
#define ERROR 0
#define OK 1
typedef int ElemType;
typedef struct Node//不要轻易去掉名字，原因不详
{
	ElemType data;
	struct Node* next;
}Node,*Linklist;

//单链表的初始化
int InitLinkList(Linklist L);

//生成“先进先出”单链表（链式队列）
Node* CreateLinkList1();

//生成“后进先出”单链表(链式栈)
Node* CreateLinkList2();

//销毁单链表
void DestroyLinkList(Linklist L);

//插入操作
int LinkListInsert(Linklist L, int i, ElemType x);

//删除操作
int LinkListDelete(Linklist L, int i);

//按值查找
int LocateElem(Linklist L, ElemType x);

//一次输出线性表中的所有元素
void DispSqList(Linklist L);