#include<iostream>
#include<stdio.h>

using namespace std;

int main (){

 string nama;
 int pendidikan;
 double golongan,jamkerja ,tunjangan,tjpendidik,hlembur,total;
 double honor=300000;

 cout<<"program hitung nonor karyawan kontrak PT. DINGIN DAMAI"<<endl;
 cout<<"========================================================"<<endl;
 cout<<""<<endl;
 cout<<"NAMA KARYAWAN :";cin>>nama;
 cout<<"GOLONGAN (1/2/3) :";cin>>golongan;
 //
 if (golongan==1){
 honor=300000;
 golongan=honor*0.05;}

 else if (golongan==2){
 honor=300000;
 golongan=honor*0.10;}

 else {
 honor=300000;
 golongan=honor*0.15;
 }
 //
 cout<<"PENDIDIKAN "<<endl;
 cout<<"--------------------"<<endl;
 cout<<"1. SMU"<<endl;
 cout<<"2. D3"<<endl;
 cout<<"3. S1"<<endl;
 cout<<"Pilih (no) : ";cin>>pendidikan;

 if (pendidikan==1){
 honor=300000;
 tjpendidik=honor*0.025;}

 else if (pendidikan==2){
 honor=300000;
 tjpendidik=honor*0.5;}

 else {
 honor=300000;
 tjpendidik=honor*0.075;}
 //
 cout<<"JUMLAH JAM KERJA :";cin>>jamkerja;

 if (jamkerja>=8)
 {
 hlembur=(jamkerja-8)*2500;

 }
 else {

 hlembur=0;

 }

 total=honor+golongan+tjpendidik+hlembur;
//output
 system("cls");
 cout<<"karyawan yang bernama "<<nama<<" honor yang diterima :"<<endl;
 cout<<"--------------------------"<<endl;
 cout<<"honor tetap RP : "<<honor<<endl;
 cout<<"tunjangan jabatan RP : "<<golongan<<endl;
 cout<<"tunjangan pendidikan RP : "<<tjpendidik<<endl;
 cout<<"honor lembur RP : "<<hlembur<<endl;
 cout<<"--------------------------"<<endl;
 cout<<"honor yang diterima RP : "<<total<<endl;

 return 0;

}
