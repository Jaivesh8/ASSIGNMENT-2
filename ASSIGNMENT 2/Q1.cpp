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
    
    int mid;
    int target;
    cout<<"enter target element";
    cin>>target;
    int low=0;
    int high=n-1;
    int found=0;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            cout<<"target found at"<<mid;
            found=1;
            break;
        }
        else if (arr[mid]<target){
            low=mid+1;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        
    }
    if(found==0){
        cout<<"target not found";
    }
    
    return 0;
}
