#include<iostream>
#include"process.h"
using namespace std;
template<class T>
struct Node
{
	T data;
	Node *next;
};
template<class T>
class LinkList
{
	private:
		Node<T>*Head;
	public:
		LinkList();
		~LinkList();
		void CreateList(int n);
		T Delete(int i);
		int Locate(T e);
		void ListDisplay(); 
		T GetElem(int i);
};
template<class T>
LinkList<T>::LinkList()
{
	Head=new Node<T>;
	Head->next=NULL;
}
template<class T>
LinkList<T>::~LinkList()
{
	Node<T>*p;
	while(Head)
	{
		p=Head;
		Head=Head->next;
		delete p;
	}
	Head=NULL;
}
template<class T>
void LinkList<T>::CreateList(int n)
{
	Node<T>*p,*s;
	p=Head;
	cout<<"请依次输入"<<n<<"个元素值：";
	for(int i=1;i<=n;i++)
	{
		s=new Node<T>;
		cin>>s->data;
		s->next=p->next;
		p->next=s;
		p=s;
	} 
}
template<class T>
T LinkList<T>::Delete(int i)
{
	T x;
	Node<T>*p,*q;
	p=Head;
	int j=0;
	while(p->next&&j<i-1)
	{
		p=p->next;
		j++;
	}
	if(!p->next||j>i-1)
	   throw"位置异常";
	else
	{
		q=p->next;
		p->next=q->next;
		x=q->data;
		delete q;
	} 	
}
template<class T>
int LinkList<T>::Locate(T e)
{
	int j=1;
	Node<T>*p;
	p=Head->next;
	while(p&&p->data!=e)
	{
		p=p->next;
		j++;
	}
	if(p=NULL)return 0;
	else return j;
}
template<class T>
void LinkList<T>::ListDisplay()
{
	Node<T>*p;
	p=Head->next;
	int i=1;
	while(p)
	{
		
		cout<<i<<'\t';
		cout<<p->data<<endl;
		p=p->next;
		i++;
	}
}
template<class T>
T LinkList<T>::GetElem(int i)
{
	Node<T> *p;
	p=Head->next;
	int j=1;
	while(p&&j<i)
	{
		p=p->next;j++;
	}
	if(!p||j>i)
		throw"位置";
	else
		return p->data; 
}
typedef int T;
int main()
{
	T e;
	LinkList<int>La,Lb;
	int la_len,lb_len;
	int i;
	cout<<"请输入：";
	cin>>la_len;
	cout<<endl;
	La.CreateList(la_len);
	cout<<"请输入2：";
	cin>>lb_len;
	cout<<endl;
	Lb.CreateList(lb_len);
	cout<<"la:"<<endl;
	La.ListDisplay();
	cout<<endl;
	cout<<"Lb:";
	Lb.ListDisplay() ;
	cout<<endl;
	for(i=1;i<=la_len;i++)
	{
		try
			e=Lb.GetElem(i);
		catch(char*err)
			cout<<err<<endl; 
	}    
}
