#include <iostream>
using namespace std;

int jml;

int main()
{
	int angka[jml];
	
	cout<<"Masukkan jumlah angka : ";
	cin>>jml;
	
	for (int i = 1; i <= jml; i++)
	{
		cout<<"Masukkan angka : ";
		cin>>angka[i];
	}
	
	cout<<"Tampilan data"<<endl;
	for (int j = jml; j >= 1; j--)
	{
		cout<<angka[j]<<" ";
	}
	return 0;
}
