#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int *a,int n){
     if(n==0||n==1){
        return;
     }
     for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
     }

    }

int compare(int a,int b){
    return a>b;

    }
void print(int *a,int n){
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ,";
     }
     cout<<endl;
     }

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubbleSort(a,n);
    print(a,n);
    sort(a,a+n,compare);
    print(a,n);



    return 0;
    }
