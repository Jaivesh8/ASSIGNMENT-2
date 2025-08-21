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
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}