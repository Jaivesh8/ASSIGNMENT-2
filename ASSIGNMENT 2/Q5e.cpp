#include <bits/stdc++.h>
using namespace std;

int main() {
     int n;
    cout << "Enter size of matrix: ";
    cin >> n;
    int k=(n*(n+1))/2;
    vector<int> arr(k);
    cout << "Enter elements: ";
    
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int index=(i*(i+1))/2+j;
            cin>>arr[index];
        }
        

    }
    int value;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            if(j<=i){
            value=arr[(i*(i+1))/2+j];
            }
            else{
            value=arr[j*(j+1)/2 + i] ;
            }
            cout<< value;
        }
        cout<<endl;

    }
    
    
    return 0;
}