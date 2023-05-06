#include <iostream>
using namespace std;

int main(){
    int ArraySize = 5, Numlist[5]={1,3,5,7,9};
    int cari=0, flag=-1;

    cout<<"Data Array : "<<endl;
    for(int i=0;i<ArraySize;i++)
        {
            cout<<"indeks ke - "<<i<<"="<<Numlist[i]<<endl;
        }
    
    cout<<"masukkan data yang ingin dicari : "<<endl;
    cin>>cari;
    for(int i=0;i<ArraySize;i++){
        if(cari == Numlist[i]){
            flag=i;
        }
    }
        if(flag !=-1){
            cout<<"\nData "<<cari<<" di indeks "<<flag<<endl;
        }
        else
        {
            cout<<"data "<<cari<<" tidak ditemukan"<<endl;
        }
}