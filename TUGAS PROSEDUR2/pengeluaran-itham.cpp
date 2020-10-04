#include <iostream>
using namespace std;
//PParameter x sebagai masukan dan juga keluaraan

void keluaran (int *x){
*x=*x +1;
}
int main(){
	cout<<"PROGRAM PARAMETER KELUARAN"<<endl;
	cout<<"__________SEMESTER 3_______"<<endl;
	cout<<"____IMAM KHOYRUDIN___"<<endl;
	cout<<endl;
	int bilangan;;
	cout<<"Masukan sebuah bilangan bulat:   ";cin>>bilangan;
	keluaran(&bilangan);;
	cout<<"Nilai Akhir                  :   "<<bilangan;;
	return 0;
}
