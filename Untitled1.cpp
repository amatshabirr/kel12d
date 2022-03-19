#include<iostream>
using namespace std;

int main(){
	
	int pil,bil1, bil2;
	float hasil;
	cout<<"Program Kalkulator"<<endl;
	cout<<"Menu"<<endl;
	cout<<"1. Pertambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"Masukkan Pilihan";cin>>pil;
	cout<<"Masukkan bilangan 1 = ";cin>>bil1;
	cout<<"Masukkan bilangan 2 = ";cin>>bil2;
	
	if(pil==1){
		hasil = bil1 + bil2;
		cout<<"bil1"<<" + "<<"bill2"<<" = "<<hasil<<endl;
	}
	else if(pil==2){
		hasil = bil1 - bil2;
		cout<<"bil1"<<" - "<<"bill2"<<" = "<<hasil<<endl;
}
	else if(pil==3){
		hasil = bil1 * bil2;
		cout<<"bil1"<<" x "<<"bill2"<<" = "<<hasil<<endl;
}
	else{
		hasil = bil1 / bil2;
		cout<<"bil1"<<" : "<<"bill2"<<" = "<<hasil<<endl;
	}
	
	return 0;
}
