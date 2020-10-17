#include <iostream>
using namespace std;

int a;

int main()
{
	cout<<"Masukkan angka : ";
	cin>>a;
	
	if(a%2 == 1)
	{
		for(int i = 0; i < a; i++)
		{
			cout<<" ";
			for(int j = 0; j < a; j++)
			{
				if(j == 0 || j == (a-1))
				{
					cout<<" * ";
				}
				else if (i == (a/2))
				{
					cout<<" * ";
				}
				else
				{
					cout<<" = ";
				}
			}
				cout<<endl;
		}
	}
	else
	{
		cout<<"Masukkan bilangan ganjil !";
	}
	return 0;
}
