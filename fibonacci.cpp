#include<iostream>
using namespace std;
/// PRINT N FIBONACCI NUMBERS
bool isFib(int n){
    int a=0;
    int b=1;
    int c=a+b;
    while(c<=n){
    if(n==c){
        return true;
    }
    a=b;
    b=c;
    c=a+b;

    }
    return false;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        if(isFib(i)){
            cout<<i<<" ";
        }
    }
    return 0;

    }
