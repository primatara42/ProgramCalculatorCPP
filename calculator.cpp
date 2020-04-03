#include <iostream>
using namespace std;

int main()
{
	double bil1, bil2, hasil;
	char operator;
	cout<<"Masukkan Bilangan Pertama ";cin>>bil1;
	cout<<"Masukkan Bilangan Kedua ";cin>>bil2;
	cout<<"Pilih Operator yang Diinginkan +, -, *, / ";cin>>operator;

	//PENJUMLAHAN
	if(operator = '+')
	{
		hasil = bil1 + bil2;
		cout<<"Hasil Penjumlahannya Adalah "<<hasil;
	}
	return 0;
}
