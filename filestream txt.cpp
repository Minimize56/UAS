#include <iostream>
#include <fstream>
#include <conio.h>
#include <cstdlib>
using namespace std;

struct data
{
	char barang[30];
	char nama[30];
}data;


char fileInput[15], fileInput2[15], fileInput3[15];

int garis()
{
	for(int i=0; i<70; i++)
	{
		cout<<"-";
	}
	cout<<endl;
}

int menu()
{
	cout<<"===========Filestream txt/notepad=========="<<endl;
	cout<<"[1] Menginput file"<<endl;
	cout<<"[2] Menambahkan file"<<endl;
	cout<<"[3] Membaca file"<<endl;
	cout<<"[4] Menggabungkan file"<<endl;
	cout<<"[5] Exit"<<endl;
	cout<<"Masukkan nomor yang anda pilih : ";
}

int input_data()
{
	cout<<"Masukkan nama file : ";
	cin.getline(fileInput,15);
	ofstream simpan (fileInput);
	system("cls");
	cout<<"\nNama barang\t    : ";
	cin.getline(data.nama,30);
	simpan<<data.nama<<endl;
	cout<<"\nJumlah barang\t    : ";
	cin.getline(data.barang,30);
	simpan<<data.barang<<endl;
	cout<<"\n\n\n"; system("pause");
}

int tambah_data()
{
	cout<<"Masukkan nama file tambahan: ";
	cin.getline(fileInput,15);
	ofstream simpan (fileInput, ios::app);
	system("cls");
	cout<<"\nNama barang\t    : ";
	cin.getline(data.nama,30);
	simpan<<data.nama<<endl;
	cout<<"\nJumlah barang\t    : ";
	cin.getline(data.barang,30);
	simpan<<data.barang<<endl;
	cout<<"\n\n\n"; system("pause");
}

int baca_data()
{
	cout<<"Masukkan nama file yang akan dicari ( .txt): ";
	cin>>fileInput;
	ifstream buka (fileInput);
	if(buka.good())
	{
		while(!buka.eof())
		{
			system("cls");
			while(buka)
			{ 
				buka.getline(data.nama,30);
				buka.getline(data.barang,30);	
				cout<<data.nama<<endl<<endl;
				cout<<data.barang<<endl;
			}
		}
		cout<<"\n\n\n"; system("PAUSE");
	}
	else cout<<"file tidak ada"<<endl;
	getch();
}

int gabung_data()
{
	cout<<"Masukkan nama file ke-1 (.txt): ";
	cin.getline(fileInput2,15);
	cout<<"Masukkan nama file ke-2 (.txt): ";	
	cin.getline(fileInput3,15);
	ifstream buka1 (fileInput2);
	ifstream buka2 (fileInput3);
	cout<<"Nama file yang digabung adalah (gabung) tanpa tanda kurung\n\n";system("PAUSE");
	ofstream gabung("gabung.txt");
	ofstream gabung2("gabung.txt", ios::app);
	
	while(buka1)
	{
		buka1.getline(data.nama,30);
		buka1.getline(data.barang,30);
		gabung<<data.nama<<"\n";
		gabung<<data.barang<<"\n";
	}
	buka1.close();
	gabung.close(); 
	

	while(buka2)
	{
		buka2.getline(data.nama,30);
		buka2.getline(data.barang,30);
		gabung2<<data.nama<<"\n";	
		gabung2<<data.barang<<"\n";
	}
	buka2.close();
	gabung2.close();
	
} 

int main()
{
	char kode;

	data_aku:
	system("cls"); menu(); cin>>kode; cin.ignore(); system("cls");

   	switch (kode)
   	{
   		case '1': input_data(); goto data_aku;
   		case '2': tambah_data(); goto data_aku;
		case '3': baca_data(); goto data_aku;
		case '4': gabung_data(); goto data_aku;
		case '5': cout<<"Terima Kasih"<<endl; break;
   	 	default : cout<<"\n\n\tnomor yang anda masukkan salah\n\n"<<endl; 
				 system("PAUSE"); goto data_aku;
   	}
   	return 0;
getch;
}


