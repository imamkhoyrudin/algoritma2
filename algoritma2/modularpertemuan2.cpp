#include <iostream>
using namespace std;

void tukar(int *a, int *b){
     int c;
     c = *a;
     *a = *b;
     *b = c;
 }
 
 int main()
 {
 	int a,b;
 	cout<<"sebelum ditukar"<<endl;
 	cout<<"masukan nilai A = ";cin>>a;
 	cout<<"masukan nilai B= ";cin>>b;
 	cout<<endl;
 	tukar(&a,&b);
 	cout<<"sudah ditukar"<<endl;
 	cout<<"masukan nilai A = "<<a<<endl;
 	cout<<"masukan nilai B "<<b<<endl;
 	cin.get();
 }
