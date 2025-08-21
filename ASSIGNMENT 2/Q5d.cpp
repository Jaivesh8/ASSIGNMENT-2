#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;
    int k=(n*(n+1))/2;
    vector<int> arr(k);
    cout << "Enter elements: ";
    
    
    for (int j = 0; j < n; j++)
    {
        for (int i = 0;i<=j; i++)
        {
            int index=(j*(j+1))/2+i;
            cin>>arr[index];
        }
        

    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            if(i<=j){
            cout<<arr[(j*(j+1))/2+i]<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;

    }
    
    
    return 0;
}