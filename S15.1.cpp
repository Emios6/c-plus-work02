#include<iostream>
#include<cstring>
using namespace std;
class WORD
{
private:
	char* p;
	char a[100][20];
	int n;
	char maxword[20];
public:
	WORD(char* str)
	{
		p = new char[100];
		strcpy(p, str);
	}
	int alph(char c)
	{
		if ('a' <= c && c <= 'z' || 'A' <= c && 'Z' >= c)
			return 1;
		return 0;
	}
	void fun()
	{
		int i, j, k, maxlength = 0;
		j = 0;
		for (i = 0; *(p + i) != '\0'; i++)
		{
			for (k = 0; alph(*(p + i)); i++, k++)
				a[j][k] = *(p + i);
			if (k > 0)
			{
				a[j][k] = '\0';
				if (k > maxlength)
				{
					strcpy(maxword, a[j]);
					maxlength = k;
				}
				j++;
				i--;
			}
		}
		n = j;
	}
	void print()
	{
		cout << "�����ַ���" << p << endl;
		cout << "�����������" << '\n';
		for (int i = 0; i < n; i++)
		{
			cout << a[i]<<endl;
		}
		cout << "������ĵ���" << maxword << '\t' << "������" << strlen(maxword) << endl;
	}
	~WORD()
	{
		if (p)delete[]p;
	}

};
int main()
{
	char source[100] = "I will pass the examination. Yes i can";
	WORD word(source);
	word.fun();
	word.print();
	return 0;
}
