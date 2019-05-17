#pragma once
#include<stdio.h>
#define MAX_TREE_SIZE 20
#define ElemType char
#define MAX_STATCK_SIZE 20

typedef int Stack[MAX_STATCK_SIZE];

typedef struct ArrayTree {
	int size;//���еĽ�����
	ElemType array[MAX_TREE_SIZE];
}ArrayTree, pArrayTree;

//��������
typedef struct BiTNode {
	ElemType data;
	BiTNode* l_child;
	BiTNode* r_child;
}BiTNode, * BiTree;

//��������
typedef struct TriTNode {
	ElemType data;
	TriTNode* l_child;
	TriTNode* r_child;
	TriTNode* parent;
}TriTNode, * TriTree;

/*�ݹ�����������ķ���*/
void PreOrser(BiTree root);

void InOrser(BiTree root);

void PostOrser(BiTree root);


/*goto�����������ķ���*/
void PreOrder_goto(BiTree root);

void InOrder_goto(BiTree root);

void PostOrder_goto(BiTree root);

/*�ǵݹ����������*/
void IPreOrder(BiTree root);

void IInOrder(BiTree root);

void IPostOrder(BiTree root);

/*����Ԫ�صķ���*/
void Visit(BiTree);


