#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt=0;
    for(int i=2;i<=n;i++){
            cnt=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                cnt++;
                break;
            }
        }
        if(cnt==0){
            cout<<i;
        }



    }



 return 0;
}
