#include<iostream>
using namespace std;
int main(){
    int n,p;
    cin>>n>>p;
    float i=0;
    float inc=1;
    int place =0;
    while(place<=p){
        while(i*i<=n){
            i=i+inc;
        }
        i=i-inc;
        place++;
        inc=inc/10;
    }
    cout<<i<<endl;
    return 0;


    }
