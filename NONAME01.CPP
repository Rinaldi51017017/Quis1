#include <iostream.h>
#include <conio.h>
main() {
  char nama [25];
  float jurusan,nkehadiran,ntugas1,ntugas2,ntugas3,nmid,nquiz,nfinal,tnt,na;
  cout<<"hitung nilai akhir"<<endl;
  cout<<"masukkan nama mahasiswa : ";cin>>nama;
  cout<<"masukkan jurusan mahasiswa : ";cin>>jurusan;
  cout<<"nilai kehadiran: ";cin>>nkehadiran;
  cout<<"nilai tugas 1 : ";cin>>ntugas1;
  cout<<"nilai tugas 2 : ";cin>>ntugas2;
  cout<<"nilai tugas 3 : ";cin>>ntugas3;
cout<<"nilai mid :   ";cin>>nmid;
  cout<<"nilai quiz;   ";cin >> nquiz;
  cout<<"nilai final;  ";cin >> nfinal;
   tnt= (ntugas1 + ntugas2 + ntugas3)/3;
   na =(20/100 * nkehadiran)+(20/100 *tnt)+(20/100 *nmid)+(20/100 *nquiz)+(20/100) *nfinal;
   cout<<"siswa yang bernama"<<nama<<endl;
   cout<<"jurusan mahasiswa"<<jurusan<<endl;
   cout<<"Memperolehkan nilai akhir : "<<na<<endl;
   getch();
   }
