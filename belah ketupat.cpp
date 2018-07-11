#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	
	// bagian atas
	for (int i = 5; i >= 1; i--)
	{
		cout<<"\n";
		for (int j = i; j >=0; j--)
		{
			cout<<" *";
		}
		for (int k = i; k < 5; k++)
		{
			cout<<"  ";
		}
		
		for (int k = i; k < 5; k++)
		{
			cout<<"  ";
		}
		for (int j = i; j >= 0; j--)
		{
			cout<<" *";
		}
	}
		
	
	// bagian bawah
	for (int i = 5; i >= 0; i--)
	{
		cout<<"\n";
		for (int j = i; j <= 5; j++)
		{
			cout<<" *";
		}
		for (int k = i; k > 0; k--)
		{
			cout<<"  ";
		}
		
		for (int k = i; k > 0; k--)
		{
			cout<<"  ";
		}
		for (int j = i; j <= 5; j++)
		{
			cout<<" *";
		}		
	}
		
	getch();
}

