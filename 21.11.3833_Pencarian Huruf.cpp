#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


int main(){
char kalimat[50], huruf;
	int jumlah=0, arrayindex[50], ada=0, k=0;
	cout<<"Masukan Kalimat Yang Ingin Diinputkan : ";
	gets(kalimat);
	cout<<"Masukkan Huruf Yang Dicari : ";
	scanf("%c", &huruf);
	for(int i=0; i<strlen(kalimat); i++){
	if(huruf==kalimat[i]){
	jumlah++;
	arrayindex[k] = i;
	k++;
	ada = 1;
}
}
	if(ada!=0){
	cout<<"Huruf "<<huruf<<" Terdapat Dalam Kalimat yang Dimasukan."<<endl;
	cout<<"Jumlah Huruf "<<huruf<<" Sebanyak "<<jumlah<<" Buah"<<endl;
	cout<<"Huruf "<<huruf<<" Terdapat Pada Index :"<<endl;
	for(int l=0; l<k; l++){
	cout<<arrayindex[l]<<endl;
}
}
	else{
	cout<<"Huruf "<<huruf<<" Tidak Terdapat Dalam Kalimat Yang Dimasukan";
}
return 0;
}
