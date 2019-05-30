#pragma once
typedef int ElemType;
typedef  struct Node {
	ElemType data;
	Node* next;
}Node, * LinkList;

#define ERROR 0
#define OK 1

//��ʼ��һ����ͷ���������ظ�ͷָ��
void InitLinkList(LinkList L);

//���
int LinkListlen(LinkList L);

//����Ų�ѯ
Node* getElem_L(LinkList L,int i);

//��ֵ��ѯ
Node* locateElem(LinkList L,ElemType x);

//������index��ֵ����һ����Ԫ��
int LinklistInsert_L(LinkList L,int i,ElemType x);

//ɾ������index����Ԫ��
int LinklistDelete_L(LinkList L, int i);

//�������ÿ�
void ClearLinkList(LinkList L);

//���������L��Ԫ��
void DispLinkList(LinkList L);

//������Ľ���

//1.ͷ�巨
void CreateLinkListHead(LinkList L,int n); //�Ƚ����

//2.β�巨
void CreateLinkListTail(LinkList L, int n); //�Ƚ����

