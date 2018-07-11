#include <iostream>
#include <conio.h>
using namespace std;

struct data{	//deklarasi dengan struct
	float totalsem3,totalsem4,totalsem5,ratana;	//total persemester, dan rata2 nilai akhir
	float bindosem3,bingsem3,mtksem3,fsksem3,kimiasem3,biosem3,ratasem3;	//semester 3
	float bindosem4,bingsem4,mtksem4,fsksem4,kimiasem4,biosem4,ratasem4;	//semester 4
	float bindosem5,bingsem5,mtksem5,fsksem5,kimiasem5,biosem5,ratasem5;	//semester 5
	float nrbindo,nrbing,nrmtk,nrfsk,nrkimia,nrbio;	//nilai rata2
	float unbindo,unbing,unmtk,unfsk,unkimia,unbio;	//nilai un
	float usbindo,usbing,usmtk,usfsk,uskimia,usbio;	//nilai ujian skolah
	float nsbindo,nsbing,nsmtk,nsfsk,nskimia,nsbio;	//ns
	float nabindo,nabing,namtk,nafsk,nakimia,nabio;	//nilai akhir
	float totalbindo,totalbing,totalmtk,totalfsk,totalkimia,totalbio;	//total utk menghitung rata
};
bool lulus;	//boolean lulus

int main() {
    
    int jumlah;
    data siswa[100];
    cout<<"=========================================\n";
    cout<<"Nama		= Abdul Rasyid Yuwana	|"<<endl;
    cout<<"NIM		= 20170801215		|"<<endl;
    cout<<"Kelompok	= 1			|";
    cout<<"\n=========================================\n";
    cout<<"\nmasukkan jumlah siswa   : ";
	cin>>jumlah;
    cout<<endl;
    
    for (int i=1;i<=jumlah;i++) {
    	system("cls");
    	//input nilai sem3-sem5
    	cout<<"========================Masukkan nilai semester 3(1-10)========================\n\n";
        cout<<"Masukkan nilai bahasa indonesia semester 3 : "; 
		cin>>siswa[i].bindosem3;
		cout<<"Masukkan nilai bahasa inggris semester 3 : "; 
		cin>>siswa[i].bingsem3;
		cout<<"Masukkan nilai matematika semester 3 : "; 
		cin>>siswa[i].mtksem3;
		cout<<"Masukkan nilai fisika semester 3 : "; 
		cin>>siswa[i].fsksem3;
		cout<<"Masukkan nilai kimia semester 3 : "; 
		cin>>siswa[i].kimiasem3;
		cout<<"Masukkan nilai biologi semester 3 : "; 
		cin>>siswa[i].biosem3;
		cout<<"========================Masukkan nilai semester 4(1-10)========================\n\n";
		cout<<"Masukkan nilai bahasa indonesia semester 4 : "; 
		cin>>siswa[i].bindosem4;
		cout<<"Masukkan nilai bahasa inggris semester 4 : "; 
		cin>>siswa[i].bingsem4;
		cout<<"Masukkan nilai matematika semester 4 : "; 
		cin>>siswa[i].mtksem4;
		cout<<"Masukkan nilai fisika semester 4 : "; 
		cin>>siswa[i].fsksem4;
		cout<<"Masukkan nilai kimia semester 4 : "; 
		cin>>siswa[i].kimiasem4;
		cout<<"Masukkan nilai biologi semester 4 : "; 
		cin>>siswa[i].biosem4;
		cout<<"========================Masukkan nilai semester 5(1-10)========================\n\n";
		cout<<"Masukkan nilai bahasa indonesia semester 5 : "; 
		cin>>siswa[i].bindosem5;
		cout<<"Masukkan nilai bahasa inggris semester 5 : "; 
		cin>>siswa[i].bingsem5;
		cout<<"Masukkan nilai matematika semester 5 : "; 
		cin>>siswa[i].mtksem5;
		cout<<"Masukkan nilai fisika semester 5 : "; 
		cin>>siswa[i].fsksem5;
		cout<<"Masukkan nilai kimia semester 5 : "; 
		cin>>siswa[i].kimiasem5;
		cout<<"Masukkan nilai biologi semester 5 : "; 
		cin>>siswa[i].biosem5;
		//input nilai ujian sekolah
		cout<<"========================Masukkan nilai Ujian Sekolah(1-10)========================\n\n";
		cout<<"Masukkan nilai ujian sekolah bahasa indonesia : ";
		cin>>siswa[i].usbindo;
		cout<<"Masukkan nilai ujian sekolah bahasa inggris : ";
		cin>>siswa[i].usbing;
		cout<<"Masukkan nilai ujian sekolah matematika : ";
		cin>>siswa[i].usmtk;
		cout<<"Masukkan nilai ujian sekolah fisika : ";
		cin>>siswa[i].usfsk;
		cout<<"Masukkan nilai ujian sekolah kimia : ";
		cin>>siswa[i].uskimia;
		cout<<"Masukkan nilai ujian sekolah biologi : ";
		cin>>siswa[i].usbio;
		//input nilai ujian nasional
		cout<<"========================Masukkan nilai Ujian Nasional(1-10)========================\n\n";
		cout<<"Masukkan nilai ujian nasional bahasa indonesia : ";
		cin>>siswa[i].unbindo;
		cout<<"Masukkan nilai ujian nasional bahasa inggris : ";
		cin>>siswa[i].unbing;
		cout<<"Masukkan nilai ujian nasional matematika : ";
		cin>>siswa[i].unmtk;
		cout<<"Masukkan nilai ujian nasional fisika : ";
		cin>>siswa[i].unfsk;
		cout<<"Masukkan nilai ujian nasional kimia : ";
		cin>>siswa[i].unkimia;
		cout<<"Masukkan nilai ujian nasional biologi : ";
		cin>>siswa[i].unbio;
		//total,rata rata,ns,na
        siswa[i].totalsem3=siswa[i].bindosem3+siswa[i].bingsem3+siswa[i].mtksem3+siswa[i].fsksem3+siswa[i].kimiasem3+siswa[i].biosem3;	//total nilai sem3
        siswa[i].totalsem4=siswa[i].bindosem4+siswa[i].bingsem4+siswa[i].mtksem4+siswa[i].fsksem4+siswa[i].kimiasem4+siswa[i].biosem4;	//total nilai sem4
        siswa[i].totalsem5=siswa[i].bindosem5+siswa[i].bingsem5+siswa[i].mtksem5+siswa[i].fsksem5+siswa[i].kimiasem5+siswa[i].biosem5;	//total nilai sem5
		
		siswa[i].totalbindo=siswa[i].bindosem3+siswa[i].bindosem4+siswa[i].bindosem5;	// jumlah nilai bindo
		siswa[i].totalbing=siswa[i].bingsem3+siswa[i].bingsem4+siswa[i].bingsem5;	//jumlah nilai bing
		siswa[i].totalmtk=siswa[i].mtksem3+siswa[i].mtksem4+siswa[i].mtksem5;	//jumlah nilai mtk
		siswa[i].totalfsk=siswa[i].fsksem3+siswa[i].fsksem4+siswa[i].fsksem5;	//jumlah nilai fisika
		siswa[i].totalkimia=siswa[i].kimiasem3+siswa[i].kimiasem4+siswa[i].kimiasem5;	//jumlah nilai kimia
		siswa[i].totalbio=siswa[i].biosem3+siswa[i].biosem4+siswa[i].biosem5;	//jumlah nilai biologi
	
		siswa[i].nrbindo=siswa[i].totalbindo/3;	//rata rata bahasa indonesia
    	siswa[i].nrbing=siswa[i].totalbing/3;	//rata rata bahasa inggris
    	siswa[i].nrmtk=siswa[i].totalmtk/3;	//rata rata matematika
    	siswa[i].nrfsk=siswa[i].totalfsk/3;	//rata rata fisika
    	siswa[i].nrkimia=siswa[i].totalkimia/3;	//rata rata kimia
    	siswa[i].nrbio=siswa[i].totalbio/3;	//rata rata biologi
		siswa[i].ratasem3=siswa[i].totalsem3/6;	//rata rata semester 3
		siswa[i].ratasem4=siswa[i].totalsem4/6;	//rata rata semester 4
		siswa[i].ratasem5=siswa[i].totalsem5/6;	//rata rata semester 5
		//NS
        siswa[i].nsbindo=(0.7*siswa[i].nrbindo)+(0.3*siswa[i].usbindo);	//ns bindo
        siswa[i].nsbing=(0.7*siswa[i].nrbing)+(0.3*siswa[i].usbing);	//ns bing
        siswa[i].nsmtk=(0.7*siswa[i].nrmtk)+(0.3*siswa[i].usmtk);	//ns mtk
        siswa[i].nsfsk=(0.7*siswa[i].nrfsk)+(0.3*siswa[i].usfsk);	//ns fisika
        siswa[i].nskimia=(0.7*siswa[i].nrkimia)+(0.3*siswa[i].uskimia);	//ns fisika
        siswa[i].nsbio=(0.7*siswa[i].nrbio)+(0.3*siswa[i].usbio);	//ns biologi
        //Nilai akhir
        siswa[i].nabindo=(0.4*siswa[i].nsbindo)+(0.6*siswa[i].unbindo);	//na bindo
        siswa[i].nabing=(0.4*siswa[i].nsbing)+(0.6*siswa[i].unbing);	//na bing
        siswa[i].namtk=(0.4*siswa[i].nsmtk)+(0.6*siswa[i].unmtk);	//na mtk
        siswa[i].nafsk=(0.4*siswa[i].nsfsk)+(0.6*siswa[i].unfsk);	//na fisika
        siswa[i].nakimia=(0.4*siswa[i].nskimia)+(0.6*siswa[i].unkimia);	//na fisika
        siswa[i].nabio=(0.4*siswa[i].nsbio)+(0.6*siswa[i].unbio);	//na biologi
        siswa[i].ratana=(siswa[i].nsbio+siswa[i].nakimia+siswa[i].nafsk+siswa[i].namtk+siswa[i].nabing+siswa[i].nabindo)/6;	//rata rata nilai akhir
    }
    //logika lulus/tidak
    system("cls");
    for(int i=1;i<=jumlah;i++){
    	if(siswa[i].nabindo>=4&&siswa[i].nabing>=4&&siswa[i].namtk>=4&&siswa[i].nafsk>=4&&siswa[i].nakimia>=4&&siswa[i].nabio>=4&&siswa[i].ratana>=5.5){
    	lulus=true;
	}
    	cout<<"==========Siswa ke-"<<i<<"=========="<<endl;
    	//mendisplay Nilai bahasa indonesia
    	cout<<"\nNilai bahasa indonesia =";
    	cout<<"\nSemester 3 = "<<siswa[i].bindosem3;
    	cout<<"\nSemester 4 = "<<siswa[i].bindosem4;
    	cout<<"\nSemester 5 = "<<siswa[i].bindosem5;
    	cout<<"\nNilai rata-rata = "<<siswa[i].nrbindo;
    	cout<<"\nNilai Ujian Sekolah = "<<siswa[i].usbindo;
    	cout<<"\nNS = "<<siswa[i].nsbindo;
    	cout<<"\nNilai UN = "<<siswa[i].unbindo;
    	cout<<"\nNilai Akhir = "<<siswa[i].nabindo;
    	cout<<"\n___________________________________________________________________\n";
    	//mendisplay Nilai bahasa inggris
    	cout<<"\nNilai bahasa inggris =";
    	cout<<"\nSemester 3 = "<<siswa[i].bingsem3;
    	cout<<"\nSemester 4 = "<<siswa[i].bingsem4;
    	cout<<"\nSemester 5 = "<<siswa[i].bingsem5;
    	cout<<"\nNilai rata-rata = "<<siswa[i].nrbing;
    	cout<<"\nNilai Ujian Sekolah = "<<siswa[i].usbing;
    	cout<<"\nNS = "<<siswa[i].nsbing;
    	cout<<"\nNilai UN = "<<siswa[i].unbing;
    	cout<<"\nNilai Akhir = "<<siswa[i].nabing;
    	cout<<"\n___________________________________________________________________\n";
    	//mendisplay Nilai matematika
    	cout<<"\nNilai matematika =";
    	cout<<"\nSemester 3 = "<<siswa[i].mtksem3;
    	cout<<"\nSemester 4 = "<<siswa[i].mtksem4;
    	cout<<"\nSemester 5 = "<<siswa[i].mtksem5;
    	cout<<"\nNilai rata-rata = "<<siswa[i].nrmtk;
    	cout<<"\nNilai Ujian Sekolah = "<<siswa[i].usmtk;
    	cout<<"\nNS = "<<siswa[i].nsmtk;
    	cout<<"\nNilai UN = "<<siswa[i].unmtk;
    	cout<<"\nNilai Akhir = "<<siswa[i].namtk;
    	cout<<"\n___________________________________________________________________\n";
    	//mendisplay Nilai fisika
    	cout<<"\nNilai fisika =";
    	cout<<"\nSemester 3 = "<<siswa[i].fsksem3;
    	cout<<"\nSemester 4 = "<<siswa[i].fsksem4;
    	cout<<"\nSemester 5 = "<<siswa[i].fsksem5;
    	cout<<"\nNilai rata-rata = "<<siswa[i].nrfsk;
    	cout<<"\nNilai Ujian Sekolah = "<<siswa[i].usfsk;
    	cout<<"\nNS = "<<siswa[i].nsfsk;
    	cout<<"\nNilai UN = "<<siswa[i].unfsk;
    	cout<<"\nNilai Akhir = "<<siswa[i].nafsk;
    	cout<<"\n___________________________________________________________________\n";
    	//mendisplay Nilai kimia
    	cout<<"\nNilai kimia =";
    	cout<<"\nSemester 3 = "<<siswa[i].kimiasem3;
    	cout<<"\nSemester 4 = "<<siswa[i].kimiasem4;
    	cout<<"\nSemester 5 = "<<siswa[i].kimiasem5;
    	cout<<"\nNilai rata-rata = "<<siswa[i].nrkimia;
    	cout<<"\nNilai Ujian Sekolah = "<<siswa[i].uskimia;
    	cout<<"\nNS = "<<siswa[i].nskimia;
    	cout<<"\nNilai UN = "<<siswa[i].unkimia;
    	cout<<"\nNilai Akhir = "<<siswa[i].nakimia;
    	cout<<"\n___________________________________________________________________\n";
    	//mendisplay Nilai biologi
    	cout<<"\nNilai biologi =";
    	cout<<"\nSemester 3 = "<<siswa[i].biosem3;
    	cout<<"\nSemester 4 = "<<siswa[i].biosem4;
    	cout<<"\nSemester 5 = "<<siswa[i].biosem5;
    	cout<<"\nNilai rata-rata = "<<siswa[i].nrbio;
    	cout<<"\nNilai Ujian Sekolah = "<<siswa[i].usbio;
    	cout<<"\nNS = "<<siswa[i].nsbio;
    	cout<<"\nNilai UN = "<<siswa[i].unbio;
    	cout<<"\nNilai Akhir = "<<siswa[i].nabio;
    	cout<<"\n___________________________________________________________________\n";
    	cout<<"Rata-rata\n\n";
    	cout<<"Semester 3 = ";
    	cout<<siswa[i].ratasem3;
    	cout<<"\nSemester 4 = ";
    	cout<<siswa[i].ratasem4;
    	cout<<"\nSemester 5 = ";
    	cout<<siswa[i].ratasem5;
    	cout<<"\nNilai Akhir = ";
    	cout<<siswa[i].ratana;
    	if(lulus==true){
    		cout<<"\n\n========================LULUS========================\n";
		}
		if(lulus!=true){
    		cout<<"\n\n========================TIDAK LULUS========================\n";
		}
	}
    
    
    getch();
}
