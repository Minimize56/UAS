#include<iostream>
	#include<conio.h>
	using namespace std;
	int main(){
		int nilai;
		cout<<"input nilai matakuliah"<<endl;
		cin>>nilai;
		
		if (nilai>=60){
			cout<<"LULUS\n";
		}
		else{
			cout<<"TIDAK LULUS\n";
		}
		cout<<"Program selesai";
		getch();
	}
