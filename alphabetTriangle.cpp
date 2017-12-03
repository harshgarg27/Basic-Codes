#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char no=65;
    for(int i=0;i<n;i++){
            no=65;
        for(int j=0;j<n-i;j++){
            cout<<no;
            no++;
        }
   no-=1;
    for(int j=0;j<n-i;j++){
        cout<<no;
        no--;
    }
        cout<<endl;
    }

    return 0;
    }
