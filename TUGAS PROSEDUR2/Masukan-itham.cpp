#include <iostream>
using namespace std;

int n (int x){
	int hasil;
	hasil = x + 1 ;
	return hasil;	
}
int main  () {
	cout<<"PROGRAM PARAMETER MASUKAN"<<endl;
	cout<<"__________SEMESTER 3_______"<<endl;
	cout<<"____IMAM KHOYRUDIN___"<<endl;
	cout<<endl;
	int bilangan, hasil;;
	cout<<"Masukan Bilangan Bulat : ";cin>>bilangan;
	hasil = n (bilangan);
	cout<<"Nilai Keluaran         :" <<hasil;
	return 0;
}
