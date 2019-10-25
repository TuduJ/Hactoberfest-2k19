#include<bits/stdc++.h>

using namespace std;

int main(){
    long i=3,j=5,k=1,sum=0;
    while((i*k)<1000){
        sum=sum+(i*k);
        k++;
    }
    k=1;
    while((j*k)<1000){
        sum=sum+(j*k);
        k++;
    }
    k=1;
    while((15*k)<1000){
        sum=sum-(15*k);
        k++;
    }
    cout<<sum;
    return 0;
}
