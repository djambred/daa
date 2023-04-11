#include <iostream>

using namespace std;

int main(){
    float m, cm, inci;
    

    cout<<"masukkan ukuran meter "<<endl;
    cin>>m;

    cm = m * 100;
    inci = m * 100 / 2.54;

    cout<<"ukuran dlm cm "<<cm<<endl;
    cout<<"ukuran dlm inci "<<inci<<endl;
    
    return 0;
}