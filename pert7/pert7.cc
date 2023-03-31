#include<iostream>
using namespace std;

int main(){
    int a[2]={2,2};
    
    for(int i = 0; i<2; i++){
        //for(int j=0;j<1;j++)
        {
            cout<<"element ke-["<<i<<"]"<<" Nilainya: ";
            cout<<a[i]<<endl;
        }
    }
    return 0;
}