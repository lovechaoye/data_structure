#pragma once
#include<stdio.h>
#define MAX_TREE_SIZE 20
#define ElemType char
#define MAX_STATCK_SIZE 20

typedef int Stack[MAX_STATCK_SIZE];

typedef struct ArrayTree {
	int size;//含有的结点个数
	ElemType array[MAX_TREE_SIZE];
}ArrayTree, pArrayTree;

//二叉链表
typedef struct BiTNode {
	ElemType data;
	BiTNode* l_child;
	BiTNode* r_child;
}BiTNode, * BiTree;

//三叉链表
typedef struct TriTNode {
	ElemType data;
	TriTNode* l_child;
	TriTNode* r_child;
	TriTNode* parent;
}TriTNode, * TriTree;

/*递归遍历二叉树的方法*/
void PreOrser(BiTree root);

void InOrser(BiTree root);

void PostOrser(BiTree root);


/*goto遍历二叉树的方法*/
void PreOrder_goto(BiTree root);

void InOrder_goto(BiTree root);

void PostOrder_goto(BiTree root);

/*非递归遍历二叉树*/
void IPreOrder(BiTree root);

void IInOrder(BiTree root);

void IPostOrder(BiTree root);

/*访问元素的方法*/
void Visit(BiTree);


