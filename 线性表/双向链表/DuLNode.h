#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
//Doubly Linked List    Dual Linked List
#define ERROR 0
#define OK 1
typedef int ElemType;
typedef struct DuLNode {
	ElemType data;//数据域
	DuLNode* prior;//指向前驱的指针域
	DuLNode* next;//指向后继的指针域
}DuLNode,*DuLinkList;

//1.双向链表的初始化
void InitDuLinkList(DuLinkList *L);

//2.按序号查找
DuLNode* GetElem_L(DuLinkList L,int i);

//3.插入操作
int DuLinkListInsert(DuLinkList L,int i,ElemType x);

//4.删除操作
int DuLinkListDelete(DuLinkList L, int i);

//5.双向链表的建立 从头插入,从尾插入
void CreateDuLinListHead(DuLinkList L,int n);

void CreateDuLinListTail(DuLinkList L,int n);

//6.双向链表的长度
int DuLinkListlen(DuLinkList L);

//7.根据值定位元素位置
DuLNode* locateElem(DuLinkList L, ElemType x);

//8.清理双向链表
void ClearDuLinkList(DuLinkList L);

//9.打印双向链表
void DispDuLinkList(DuLinkList L);
