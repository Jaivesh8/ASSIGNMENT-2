#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;
    int main_dia[n];
    int upper_dia[n-1];
    int lower_dia[n-1];
    cout<<"enter main diagonal";
    for (int i = 0; i < n; i++) {
        cin>>main_dia[i];
    }
    cout<<"enter upper diagonal";
    for (int i = 0; i < n-1; i++) {
        cin>>upper_dia[i];
    }
    cout<<"enter lower diagonal";
    for (int i = 0; i < n-1; i++) {
        cin>>lower_dia[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        {
            if(i==j){
                cout<<main_dia[i]<<" ";
                
            }
            else if(i==j-1){
                cout<<upper_dia[i]<<" ";
                
            }
            else if(i==j+1){
                cout<<lower_dia[j]<<" ";
                
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
        
    }
    
    return 0;
}