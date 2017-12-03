#include<iostream>
using namespace std;
int main(){
    int n;
    int a[]={1,1,2,3,2,3,4};

    int ans=0;
    for(int i=0;i<n;i++){
    ans=ans^a[i];
    }

    cout<<ans;
    return 0;


}
