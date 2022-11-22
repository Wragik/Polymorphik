#include <iostream>
#include<string>
#include<Windows.h>
int k = 3;
int z = k + k;
using namespace std;
class mass1 {
protected:
	string* m = new string[k];
public:
	virtual void massiv(string s1, int i);
};

void mass1::massiv(string s1, int i)
{
	m[i] = s1;
}
class mass2 : public mass1 {
protected:
	string* ma = new string[k];
public:
	void massiv(string s1, int i) override;
};
void mass2::massiv(string s1, int i)
{
	ma[i] = s1;

	//cout << ma[2] << "1" << "\n";
}
class mass3 : public mass2 {
protected:
	string* g = new string[z];
	string* v = new string[z];
public:
	void m3();
	void zero();
	void print();
	void proverka();
	void print2();
	void zd();
	void index(int a);

};
void mass3::zd()
{
	for (int i = 0; i < z; i++)
	{
		int x = 0;
		if (m[x] == ma[x])
		{

			x++;

		}
		else
		{

			g[x] = m[x];
			g[x + 1] = ma[x];
		}
	}
}
void mass3::m3()
{
	int x = 0;
	for (int i = 0; i < k; i++)
	{
		g[x] = m[x];
		x++;
	}
	for (int i = 0; i < k; i++)
	{

		g[x] = ma[i];
		x++;
	}
}
void mass3::zero()
{
	for (int i = 0; i < z; i++)
	{
		g[i] = " ";
	}

}
void mass3::index(int a)
{
	if ((a >= 0) && (a < z))
	{
		if (v[a] != "")
		{
			cout << v[a];
		}

	}
	else
	{
		cout << "Пусто";
	}// Если что то g это фулл связный массив

}
void mass3::print()
{
	for (int i = 0; i < k; i++)
	{

		cout << m[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < k; i++)
	{

		cout << ma[i] << " ";
	}
	cout << "\n";

	for (int i = 0; i < z; i++)
	{
		cout << g[i] << " ";
	}
	cout << "\n";
}
void mass3::proverka()
{
	int x = 0;
	for (int i = 0; i < k; i++)
	{
		v[x] = m[i];
		x++;

	}
	for (int i = 0; i < k; i++)
	{
		int p = 0;
		if (g[x] == m[p] || g[x] == m[p + 1] || g[x] == m[p + 2])
		{
			x++;
			p++;
			//cout << "a" << endl;
		}
		else
		{
			v[x] = ma[i];
			x++;
			p++;
			//cout << "b" << endl;
		}
	}
}
void mass3::print2()
{
	for (int i = 0; i < z; i++)
	{
		cout << v[i] << " ";
	}
	cout << "\n";
}
int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int f;
	char p[8];
	mass1 m1;
	mass2 m2;
	mass3 m3;
	mass1* mass = &m1;
	cout << "Введите первый массив \n";
	for (int i = 0; i < k; i++)
	{
		cin.get(p, 7);
		cin.ignore(INT_MAX, '\n');
		mass->massiv(p, i);
	}
	mass1* mass = &m2;
	cout << "Введите второй массив \n";
	for (int i = 0; i < k; i++)
	{
		cin.get(p, 7);
		cin.ignore(INT_MAX, '\n');
		mass->massiv(p, i);
	}
	m3.m3();
	m3.print();
	m3.proverka();
	m3.print2();
	cout << "Введите номер индекса ";
	cin >> f;
	m3.index(f);
}
