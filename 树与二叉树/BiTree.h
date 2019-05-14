#define MAX_TREE_SIZE 20
#define ElemType char
#define BiT "Binary tree"
#define TriT "Trigeminal tree"
#define L "left child"
#define R "right child"
#define D "根节点"
#define _PreOrderReverse "前序遍历"    //DLR
#define _InOrderReverse "中序遍历"     //LDR
#define _PostOrderReverse "后续遍历"   //LRD
//树的存储结构分为两种,顺序存储和链式存储
//树形结构是有方向的,从根节点向下
//顺序存储依赖于二叉树的第五性质
typedef struct ArrayTree
{
    ElemType array[MAX_TREE_SIZE];
}ArrayTree,*pArrayTree;
//存储的方法是:对于二叉树编号为i的结点,它在数组中的存储位置是i-1,对于完全二叉树数组结构可以充分占据整个存储空间，
//因为它的编号是连续的。但是对于一般的二叉树和单分支二叉树来说,这种存储非常浪费存储空间,而且顺序存储的存储方式,删除添加元素
//都比较麻烦.所以一般也不用


//以下两种均是二叉树的存储形式

//二叉链表,树最常用的存储结构
typedef struct BiTNode{
    ElemType data;//结点需要保存的数据
    BiNTree* lchild;//该结点的左孩子,指针类型
    BiNTree* rchild;//结点的右孩子,指针类型
}BiTNode,*BiTree;

//三叉链表,为了弥补二叉链表查找双亲结点的缺点,在结点元素中添加双亲结点的指针(树的双亲其实就是单结点)
typedef struct TriTNode
{
    ElemType data;//结点需要保存的数据
    TriTNode* lchild;//该结点的左孩子,指针类型
    TriTNode* rchild;//该结点的右孩子,指针类型
    TriTNode* parent;//该结点的双亲结点,指针类型。这里就体现了算法中,空间换时间的特点
}TriTNode,*TriTree;

//二叉树的遍历:前序遍历,中序遍历,后序遍历

//前序遍历
void PreOrderReverse(BiTree Root);

//中序遍历
void InOrderReverse(BiTree Root);

//后序遍历
void PostOrderReverse(BiTree Root);

//访问根结点
void Visit(BiTree Child);

//前序遍历所有结点
void PreOrder(BiTree LChild);

//中序遍历所有结点
void InOrder(BiTree LChild);

//后序遍历所有结点
void PostOrder(BiTree LChild);