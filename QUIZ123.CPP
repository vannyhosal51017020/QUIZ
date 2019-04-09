#include<iostream.h>
#include<conio.h>
main () {
char nama [30], jurusan [20];
float a,b,c,d,e,NK,NTgs1,NTgs2,NTgs3,NMid,NQuiz,NFinal,TNTugas,NA;
cout<<"Program Menghitung Nilai Akhir"<<endl<<endl;
	cout<<"Masukkan nama :    ";cin>>nama;
   cout<<"Nama Jurusan :     ";cin>>jurusan;
	cout<<"Nilai Tugas 1 :    ";cin>>NTgs1;
	cout<<"Nilai Tugas 2 :    ";cin>>NTgs2;
	cout<<"Nilai Tugas 3 :    ";cin>>NTgs3;
   cout<<"Nilai Kehadiran :  ";cin>>NK;
	cout<<"Nilai MID :  ";cin>>NMid;
	cout<<"Nilai Quiz :  ";cin>>NQuiz;
	cout<<"Nilai Final :  ";cin>>NFinal;
       TNTugas = (NTgs1+NTgs2+NTgs3)/3;
       a = NK*20/100;
       b = TNTugas*20/100;
       c = NMid*20/100;
       d = NQuiz*20/100;
       e = NFinal*20/100;
       NA = a+b+c+d+e;
   cout<<"\nNama mahasiswa= "<<nama;
   cout<<"\nJurusan =   "<<jurusan;
   cout<<"\nNilai Akhir =   "<<NA;
getch (); }

