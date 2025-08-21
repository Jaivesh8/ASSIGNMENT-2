#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,r,c;
    cout << "Enter size of matrix: ";
    cin >> n;
    cout<<"enter no of rows";
    cin>>r;
    cout<<"enter no of cols";
    cin>>c;
    vector<vector<int>> triplet;
    vector<vector<int>> Transpose_triplet;
    int arr[r][c];
    cout << "Enter elements: ";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
        {
           cin>> arr[i][j]; 
        }
        cout<<endl;
          
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
        {
           if(arr[i][j]!=0){
            triplet.push_back({i,j,arr[i][j]});
            Transpose_triplet.push_back({j,i,arr[i][j]});
           }
        }
        cout<<endl;
          
    }
    
    
    
   for (auto &t:triplet){
    cout<<t[0]<<" "<<t[1]<<" "<<t[2]<<endl;
   }
   for (auto &t:Transpose_triplet){
    cout<<t[0]<<" "<<t[1]<<" "<<t[2]<<endl;
   }
   
    return 0;
}