#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	double a,b,c;
	cout<<"===mencari nilai terbesar dari 3 bilangan===\n\n";
	cout<<"Masukkan nilai pertama = ";
	cin>>a;
	cout<<endl;
	cout<<"Masukkan nilai kedua = ";
	cin>>b;
	cout<<endl;
	cout<<"Masukkan nilai ketiga = ";
	cin>>c;
	cout<<endl;
	if (a>b){
		if (a>c)
		cout<<"Nilai terbesar = "<<a;
		else
		cout<<"Nilai terbesar = "<<c;
	}
	else if (b>c){
		cout<<"Nilai terbesar = "<<b;}
		else
		cout<<"Nilai terbesar = "<<c;
getch();
}
