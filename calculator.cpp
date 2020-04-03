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
	
	else if(operator = '-')
	{
		hasil = bil2 - bil1;
		cout<<"Hasil Pengurangannya Adalah "<<hasil;
	}

	else if(operator = '*')
	{
		hasil = bil2 * bil1;
		cout<<"Hasil Perkaliannya Adalah "<<hasil;
	}
	return 0;
}
