#include <iostream>

using namespace std;


void tambah(){
    int a = 10;
    int b = 5;
    int c;
    c= a+b;
    cout<<c<<endl;
}

void pilih(){
    int pil;
    char back;
    do{
        cout<<"0.exit"<<endl;
        cout<<"1.penjumlahan"<<endl;
        cout<<"pilih : ";
        cin>>pil;
        switch(pil){
            case 0: 
                cout<<"exit"<<endl;
                return;
            case 1:
                tambah();
                break;
            default:
                cout<<"pilihan salah"<<endl;
                break;
            }
            cout<<"pilih kembali?"<<endl;
            cin>>back;
        }
    while(back !='t');
    cout<<"thanks"<<endl; 
}
    

int main(){
    pilih();   
    return 0;
}