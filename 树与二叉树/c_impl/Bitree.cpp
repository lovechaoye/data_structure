#include"Bitree.h"

void Visit(BiTree p) {
	if (p)
	{
		printf("%c\n", p->data);
		return;
	}
	printf("node is NULL!!!\n");
}


void PreOrser(BiTree root) {
	Visit(root);
	if (root->l_child != NULL) PreOrser(root->l_child);
	if (root->r_child != NULL) PreOrser(root->r_child);
}

void InOrser(BiTree root) {
	if (root->l_child != NULL) InOrser(root->l_child);
	Visit(root);
	if (root->r_child != NULL) InOrser(root->r_child);
}

void PostOrser(BiTree root) {
	if (root->l_child != NULL) PostOrser(root->l_child);
	if (root->r_child != NULL) PostOrser(root->r_child);
	Visit(root);
}

void PreOrder_goto(BiTree root) {
			BiTree p = root;
			int top = 0;
			Stack s;
			int address = 0;
		L1:if (p!=NULL) {
			Visit(p);
			top = top + 2;
			if (top > MAX_STATCK_SIZE) return;
			// s[top] = L2;//访问右结点的地址
			__asm {
				mov eax, L2
				mov s[top * 4], eax
			}
			s[top - 1] = (int)p;
			p = p->l_child;
			goto L1;

		L2:top = top + 2;
			if (top > MAX_STATCK_SIZE) return;
			//s[top] = L3;//访问右结点的地址
			__asm {
				mov eax, L3
				mov s[top * 4], eax
			}
			s[top - 1] = (int)p;
			p = p->r_child;
			goto L1;
		}
		L3:if (top > 0) {
		   p = (BiTree)s[top - 1];
		   address = s[top];
		   top = top - 2;
		   __asm {
			   mov eax, address//因为goto无法进行跳转到变量所以采用嵌入汇编
			   jmp eax
		   }
		}
}

void InOrder_goto(BiTree root) {
			BiTree p = root;
			int top = 0;
			Stack s;
			int address = 0;
		L1:if (p != NULL) {
					top = top + 2;
					if (top > MAX_STATCK_SIZE) return;
					s[top - 1] = (int)p;
					__asm {//保存访问的地址
						mov eax,L2
						mov s[top*4],eax
					}
					p = p->l_child;
					goto L1;
				L2:Visit(p);
					top = top + 2;
					if (top > MAX_STATCK_SIZE) return;
					s[top - 1] = (int)p;
					__asm {
						mov eax, L3//保存结束的地址
						mov s[top * 4], eax
					}
					p = p->r_child;
					goto L1;
			}
			L3: if (top>0)
			{
					p = (BiTree)s[top - 1];
					address = s[top];
					top = top - 2;
					__asm {
						mov eax,address
						jmp eax
					}
			}
}

void PostOrder_goto(BiTree root) {
			BiTree p = root;
			int top = 0;
			Stack s;
			int address = 0;
		L1:if (p!=NULL) {
					top = top + 2;
					if (top > MAX_STATCK_SIZE) return;
					s[top - 1] = (int)p;
					__asm {//保存右子树的地址
						mov eax, L2
						mov s[top * 4], eax
					}
					p = p->l_child;
					goto L1;
				L2:top = top + 2;
					if (top > MAX_STATCK_SIZE) return;
					s[top - 1] = (int)p;
					__asm {//保存访问的地址
						mov eax, L3
						mov s[top * 4], eax
					}
					p = p->r_child;
					goto L1;
				L3:Visit(p);
			}
		   if (top>0)
		   {
				   p = (BiTree)s[top - 1];
				   address = s[top];
				   top = top - 2;
				   __asm {
					   mov eax, address
					   jmp eax
				   }
		   }
}

void IPreOrder(BiTree root) {
			BiTree p = root;
			int top = 0;
			Stack s = {0};
			do
			{
				while (p!=NULL)
				{
					Visit(p);
					top = top + 1;
					if (top > MAX_STATCK_SIZE) return;
					s[top] = (int)p;
					p = p->l_child;
				}
				if (top>0)
				{
					p = (BiTree)s[top];
					top = top - 1;
					p = p->r_child;
				}
			} while (top>0||p!=NULL);
}

void IInOrder(BiTree root) {
		BiTree p = root;
		int top = 0;
		Stack s = { 0 };
		do
		{
				while (p != NULL)
				{
					top = top + 1;
					if (top > MAX_STATCK_SIZE) return;
					s[top] = (int)p;
					p = p->l_child;
				}
				if (top > 0)
				{
					p = (BiTree)s[top];
					top = top - 1;
					Visit(p);
					p = p->r_child;
				}
		} while (top > 0 || p != NULL);
}

void IPostOrder(BiTree root) {
		BiTree p = root;
		int top = 0;
		Stack s = { 0 };
		do
		{
				while (p != NULL)
				{
					top = top + 1;
					if (top > MAX_STATCK_SIZE) return;
					s[top] = (int)p;
					p = p->l_child;
				}
				if (top > 0)
				{
					p = (BiTree)s[top];
					p = p->r_child;
					while (p)
					{

					}
					Visit(p);
				}
		} while (p != NULL);
		
}