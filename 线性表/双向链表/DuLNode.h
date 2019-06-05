#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
//Doubly Linked List    Dual Linked List
#define ERROR 0
#define OK 1
typedef int ElemType;
typedef struct DuLNode {
	ElemType data;//������
	DuLNode* prior;//ָ��ǰ����ָ����
	DuLNode* next;//ָ���̵�ָ����
}DuLNode,*DuLinkList;

//1.˫������ĳ�ʼ��
void InitDuLinkList(DuLinkList *L);

//2.����Ų���
DuLNode* GetElem_L(DuLinkList L,int i);

//3.�������
int DuLinkListInsert(DuLinkList L,int i,ElemType x);

//4.ɾ������
int DuLinkListDelete(DuLinkList L, int i);

//5.˫������Ľ��� ��ͷ����,��β����
void CreateDuLinListHead(DuLinkList L,int n);

void CreateDuLinListTail(DuLinkList L,int n);

//6.˫������ĳ���
int DuLinkListlen(DuLinkList L);

//7.����ֵ��λԪ��λ��
DuLNode* locateElem(DuLinkList L, ElemType x);

//8.����˫������
void ClearDuLinkList(DuLinkList L);

//9.��ӡ˫������
void DispDuLinkList(DuLinkList L);
