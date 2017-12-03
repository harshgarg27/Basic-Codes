#include<iostream>
using namespace std;
int main(){
    int n=5;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){

    if(a[i]==42){
        return 0;
    }
    int rem=a[i]%10;
    int no=a[i]/10;
    if(no>=rem||no==0){
        cout<<rem<<endl;
    }
    else{
        cout<<no<<endl;
    }


    }
    return 0;
}
