#include<iostream>
using namespace std;

typedef struct node
{
	char data;
	struct node *next;
}LNode,*LinkList;
void InitList (LinkList &L)
{
	L=new LNode;
	L->data=NULL;
}
void InputList(LinkList L,int n)
{
	LNode*p,*s;
	s=L;
	cout<<"ÇëÊäÈëÔªËØÖµ" ;
	for(int i=1;i<=n;i++)
	{
		p=new LNode;
		cin>>p->data;
		s->next=p;
		s=p;
	}
	s->next=NULL;
}
void Display(LinkList L)
{
	LNode*p;
	p=L->next ;
	while(p)
	{
		cout<<p->data;
		p=p->next; 
	}
}
void Delete (LinkList L,int i)
{
	char x;
	LNode *p,*q;
	p=L;
	int j=0;
	while( p->next&&j<i-1)
	{
		p=p->next;
		j++;
	}
	q=p->next ;
	p->next =q->next ;
	x=q->data ;
	delete q;
}

int main()
{
	LNode A;
	InitList(A);
	int i;
	InputList(A,i)
	
}
