#include <bits/stdc++.h>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and cols of Matrix 1: ";
    cin >> r1 >> c1;
    int arr1[r1][c1];
    vector<vector<int>> triplet1;
    
    cout << "Enter elements of Matrix 1:\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++) {
            cin >> arr1[i][j];
            if (arr1[i][j] != 0) triplet1.push_back({i, j, arr1[i][j]});
        }

    cout << "Enter rows and cols of Matrix 2: ";
    cin >> r2 >> c2;
    int arr2[r2][c2];
    vector<vector<int>> triplet2;
    
    cout << "Enter elements of Matrix 2:\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++) {
            cin >> arr2[i][j];
            if (arr2[i][j] != 0) triplet2.push_back({i, j, arr2[i][j]});
        }

    if (c1 != r2) {
        cout << "Multiplication not possible!\n";
        return 0;
    }

    
    map<pair<int,int>, int> resultMap;
    for (auto &a : triplet1) {
        for (auto &b : triplet2) {
            if (a[1] == b[0]) { 
                resultMap[{a[0], b[1]}] += a[2] * b[2];
            }
        }
    }

    // Convert map to triplet
    vector<vector<int>> triplet3;
    for (auto &entry : resultMap) {
        if (entry.second != 0)
            triplet3.push_back({entry.first.first, entry.first.second, entry.second});
    }

    cout << "Result";
    for (auto &t : triplet3)
        cout << t[0] << " " << t[1] << " " << t[2] << endl;

    return 0;
}
