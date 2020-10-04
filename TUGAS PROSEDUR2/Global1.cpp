#include <iostream>
using namespace std;
float luas();
int a,b,c,luas2;  //variabel global
int main()

{ 
	cout<<"PROGRAM VARIABEL GLOBAL"<<endl;
	cout<<"__________SEMESTER 3_______"<<endl;
	cout<<"____IMAM KHOYRUDIN___"<<endl;
	 cout<<"panjang = ";cin>>a;
 	cout<<"lebar = ";cin>>b;
 	c=luas();
 	cout<<"luas = "<<c;
}
float luas ()
{  ;
 luas2=a*b;
 return luas2;
}
