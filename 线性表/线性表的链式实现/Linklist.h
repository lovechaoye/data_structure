#pragma once
#define ERROR 0
#define OK 1
typedef int ElemType;
typedef struct Node//��Ҫ����ȥ�����֣�ԭ����
{
	ElemType data;
	struct Node* next;
}Node,*Linklist;

//������ĳ�ʼ��
int InitLinkList(Linklist L);

//���ɡ��Ƚ��ȳ�����������ʽ���У�
Node* CreateLinkList1();

//���ɡ�����ȳ���������(��ʽջ)
Node* CreateLinkList2();

//���ٵ�����
void DestroyLinkList(Linklist L);

//�������
int LinkListInsert(Linklist L, int i, ElemType x);

//ɾ������
int LinkListDelete(Linklist L, int i);

//��ֵ����
int LocateElem(Linklist L, ElemType x);

//һ��������Ա��е�����Ԫ��
void DispSqList(Linklist L);