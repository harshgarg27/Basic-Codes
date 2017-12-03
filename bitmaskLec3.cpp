#include<iostream>
using namespace std;
int main(){
    int n=10;
    int a[]={1,2,3,5,7,3,2,1,4,4};
    int xo=0;
    for(int i=0;i<n;i++){
        xo=(xo^a[i]);
    }
    int rem =xo;
    int pos=0;
    int lastbit = xo&1;
        while(lastbit!=0){
            pos++;
        }
        xo=xo>>1;
        lastbit= (xo&1);

    int mask=1<<pos;
    int set1=0;
    for(int i=0;i<n;i++){
            if((mask&a[i])==0){
        set1=(set1^a[i]);
    }
    }
    cout<<set1<<" "<<(set1^rem);


    return 0;
    }
