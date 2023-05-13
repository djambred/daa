#include <iostream>
using namespace std;

void lopfor(){
    for(int a=5; a>=3; a--){
            cout<< a <<endl;
        }
}

void tambah(){
    int a = 10;
	int b = 5;
	int c;
    c=a+b;
	cout<<c<<endl;
}

void pilihan(){
    int pil;
	cout<<"0.Exit"<<endl;
	cout<<"1.Penjumlahan"<<endl;
    cout<<"2.loopfor"<<endl; 
    cout<<"Pilihan : ";
	cin>>pil;
    if(pil==0){
		cout<<"Thanks"<<endl;
	}else if(pil==1){
		tambah();
        pilihan();
        //goto pilihan;
	}else if(pil==2){
        lopfor();
        //goto pilihan;
	}else{
        cout<<"Pilihan Salah"<<endl;
        //goto pilihan;
    }
	
        
}

int main(){
	pilihan();
	//return 0;
}