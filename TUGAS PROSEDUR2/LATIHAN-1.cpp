#include <iostream>
using namespace std;
void rata(){
int a, b, n, i;
	
	cout<<"PROGRAM LATIHAN PROSEDUR"<<endl;
	cout<<"__________SEMESTER 3_______"<<endl;
	cout<<"____IMAM KHOYRUDIN___"<<endl;
	
	cout<<"JUMLAH PESERTA UJIAN = ";cin>>n;
	cout<<"Nilai ujian yang ke-1 = ";cin>>a;
		cout<<"Nilai Ujian yang ke-2 = ";cin>>b;
	
	i = a+b; i =i/2;
	cout<<"Nilai rata-rata ="<<i<<endl;
	
	if (i > 50){
		cout<<"Nillai rata rata ujian bagus"<<endl;
	}
	else{
	 cout<<"Nilai rata rata ujian kurang bagus"<<endl;
	}
}
int main ()
{
	rata();
	return 0;;
}
