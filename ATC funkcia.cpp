#include <iostream>
#include <conio.h>
#include <string.h>
#define n 2
// koment
struct ATC
{
	char rahunok[20], last_name[20], name[20], adres[20], nomer[20];
};
// new koment
void sorting(struct ATC *p)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i++; j < n; j++)
		{
			if (p[i].last_name[1] > p[j].last_name[1])
			{
				ATC temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
	std::cout << "\n";
}

void poshuk(struct ATC *p)
{
	int m = 0;
	char nomer1[20];
	std::cout << "Enter the number of the person you are looking for - \n";
	std::cin >> nomer1;
	int d = strlen(nomer1);
	std::cout << "\n";
	for (int i = 0; i < n; i++)
	{
		if (p[i].nomer[d] == nomer1[d])
		{
			std::cout << "Subscriber found\n";
			std::cout << "Rahunok"
								<< "\t\t"
								<< "last name and name"
								<< "\t"
								<< "Adress"
								<< "\t\t"
								<< "Nomer\n";
			std::cout << p[i].rahunok << "\t" << p[i].last_name << " " << p[i].name << "\t" << p[i].adres << "\t" << p[i].nomer << "\n";
			m++;
		}
	}
	if (m == 0)
		std::cout << "There is no such Subscriber\n";
}

void main()
{
	using namespace std;
	ATC a[n]{};
	int m = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the personal account, last name, first name, address and phone number of the caller nomer " << i + 1 << "\n";
		cin >> a[i].rahunok >> a[i].last_name >> a[i].name >> a[i].adres >> a[i].nomer;
	}
	sorting(a);
	for (int i = 0; i < n; i++)
	{
		cout << "Subscriber nomer" << i + 1 << "\n";
		cout << "Rahunok"
				 << "\t\t"
				 << "last name and name"
				 << "\t"
				 << "Adress"
				 << "\t\t"
				 << "Nomer\n";
		cout << a[i].rahunok << "\t" << a[i].last_name << " " << a[i].name << "\t" << a[i].adres << "\t" << a[i].nomer << "\n";
	}
	cout << "\n";
	poshuk(a);
}