#pragma once
typedef int ElemType;
typedef  struct Node {
	ElemType data;
	Node* next;
}Node, * LinkList;

#define ERROR 0
#define OK 1

//初始化一个带头单链表，返回该头指针
void InitLinkList(LinkList L);

//求表长
int LinkListlen(LinkList L);

//按序号查询
Node* getElem_L(LinkList L,int i);

//按值查询
Node* locateElem(LinkList L,ElemType x);

//在索引index的值插入一个新元素
int LinklistInsert_L(LinkList L,int i,ElemType x);

//删除索引index处的元素
int LinklistDelete_L(LinkList L, int i);

//单链表置空
void ClearLinkList(LinkList L);

//输出单链表L的元素
void DispLinkList(LinkList L);

//单链表的建立

//1.头插法
void CreateLinkListHead(LinkList L,int n); //先进后出

//2.尾插法
void CreateLinkListTail(LinkList L, int n); //先进后出

