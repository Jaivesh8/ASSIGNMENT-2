#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter array values";
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if(arr[j+1]<arr[j])
           swap(arr[j+1],arr[j]);
        }
        
    }
    int missing;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i+1]-arr[i]>1){
            for ( int j = 1; j <arr[i+1]-arr[i] ; j++)
            {
                missing=arr[i]+j;
                cout<<missing;
            }
            
          
        }
        if(arr[i+1]-arr[i]==0){
           
        }
        
    }
    
    
    return 0;
}