#include <bits/stdc++.h>
using namespace std;

int main() {
     int r,c,r2,c2;
    cout<<"enter no of rows of 1";
    cin>>r;
    cout<<"enter no of cols of 1";
    cin>>c;
    vector<vector<int>> triplet1;
    cout<<"enter no of rows of 2";
    cin>>r2;
    cout<<"enter no of cols of 2";
    cin>>c2;
    vector<vector<int>> triplet2;
    int arr1[r][c];
    int arr2[r2][c2];
    vector<vector<int>> triplet3;
    cout << "Enter elements: ";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
        {
           cin>> arr1[i][j]; 
        }
        cout<<endl;
          
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
        {
           if(arr1[i][j]!=0){
            triplet1.push_back({i,j,arr1[i][j]});
           }
        }
        cout<<endl;
          
    }
    
    cout<<"enter elements of arr 2";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++)
        {
           cin>> arr2[i][j]; 
        }
        cout<<endl;
          
    }
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++)
        {
           if(arr2[i][j]!=0){
            triplet2.push_back({i,j,arr2[i][j]});
           }
        }
        cout<<endl;
          
    }
   if (r != r2 || c != c2) {
    cout << "Addition not possible!" << endl;
    return 0;
}
int i = 0, j = 0;
while (i < triplet1.size() && j < triplet2.size()) {
    // Case 1: triplet1[i] comes before triplet2[j]
    if (triplet1[i][0] < triplet2[j][0] ||
       (triplet1[i][0] == triplet2[j][0] && triplet1[i][1] < triplet2[j][1])) {
        triplet3.push_back(triplet1[i]);
        i++;
    }
    // Case 2: triplet2[j] comes before triplet1[i]
    else if (triplet2[j][0] < triplet1[i][0] ||
            (triplet2[j][0] == triplet1[i][0] && triplet2[j][1] < triplet1[i][1])) {
        triplet3.push_back(triplet2[j]);
        j++;
    }
    // Case 3: Same row and col → add values
    else {
        int sum = triplet1[i][2] + triplet2[j][2];
        if (sum != 0) {
            triplet3.push_back({triplet1[i][0], triplet1[i][1], sum});
        }
        i++; j++;
    }
}
  while (i < triplet1.size()) {
    triplet3.push_back(triplet1[i++]);
}
while (j < triplet2.size()) {
    triplet3.push_back(triplet2[j++]);
}
cout << "Resultant triplet";
    for (auto &t : triplet3) {
        cout << t[0] << " " << t[1] << " " << t[2] << "\n";
    }

    return 0;
}