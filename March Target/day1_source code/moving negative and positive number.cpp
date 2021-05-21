#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int i=0,j=n-1;
    while(i<=j){
        if(arr[i]<0)
           i++;


        else{
            swap(arr[i],arr[j]);i++;j--;
        }

    }
     for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}

}
