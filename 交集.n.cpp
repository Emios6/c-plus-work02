#include<iostream> 
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
	cout<<"����������"<<n<<"��Ԫ��ֵ��";
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
	   throw"λ���쳣";
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
		throw"λ��";
	else
		return p->data; 
}
int main()
{
	LinkList<char>A;
	LinkList<char>B; 
	int i;
	cout<<"������A���е�Ԫ�ظ�����";
	cin>>i;
	cout<<endl;
	A.CreateList(i);	
	cout<<"������B���е�Ԫ�ظ�����";
	cin>>i;
	cout<<endl;
	B.CreateList(i);
} 
