#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    char d1[20];
    char d2[10][20];
    int i=0;
    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++) {
            d1[j] = ' ';
            d2[i][j] = ' ';
        }
    }
    for(int j=0; j<10; j++){
        cin>>d2[j];
    }
    cin>>d1;
    if(f(d2, d1, i)==1){
        cout<<i;
    }else{
        cout<<"non presente"<<endl;
    }
    return 0;
}
