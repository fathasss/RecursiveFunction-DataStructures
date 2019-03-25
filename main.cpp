#include "pch.h"
#include <iostream>
#include "libraryhas.h"
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Turkish");
//Tanımlar
	int i,k,j=0,l,m,n,p,r;
	char A = 'A';
	char B = 'B';
	char C = 'C';
//Hanoi Kuleleri
	cout << "Disk sayısını giriniz:" << endl;
	cin >> i;
	hanoi(i,A,C,B);
	cout << "\n";
//Fibonacci Serisi
	cout << "Fibonacci serisi için giriş yapınız:\n";
	cin >> k;
	cout<<"Fibonacci serisi terimleri:\n";
	for (int c = 1;c <= k; c++){
		cout<<fibonacci(j)<<"\n";
		j++;
	}
//Faktoriyel hesabı
	cout << "Faktoriyeli alınmasını istediğiniz sayıyı giriniz: ";
	cin >> l;
	cout <<l<<" sayısının faktoriyeli "<<fact(l)<<"' dir."<<endl;
//Permütasyon hesabı
	cout <<"Permüstasyon Hesabı için verileri giriniz.\n";
	cin >> m>>n;
	cout<<"P("<<m<<","<<n<<")= "<<per(m, n)<<endl;

//Kombinasyon hesabı
	cout <<"Kombinasyon Hesabı için verileri giriniz.\n";
	cin >> p>>r;
	cout << "K(" << p <<","<< r << ")= " << kom(p,r);
  cout<<"\n\n\n\n\n\n";
  cout<<"Created By MR.HAS  ";
}
