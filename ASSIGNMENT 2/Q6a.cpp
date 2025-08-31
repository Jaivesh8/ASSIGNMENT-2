#include <iostream>
using namespace std;

int main() {
    int m, n, t;
    cout << "Enter number of rows, cols and non-zero elements";
    cin >> m >> n >> t;

    int triplet[100][3];     
    int transpose[100][3];   

    triplet[0][0] = m;
    triplet[0][1] = n;
    triplet[0][2] = t;

    cout << "Enter triplet (row col val) non-zero element\n";
    for (int i = 1; i <= t; i++) {
        cin >> triplet[i][0] >> triplet[i][1] >> triplet[i][2];
    }

    transpose[0][0] = n; 
    transpose[0][1] = m;  
    transpose[0][2] = t;

    int k = 1;
    for (int col = 0; col < n; col++) {
        for (int i = 1; i <= t; i++) {
            if (triplet[i][1] == col) {
                transpose[k][0] = triplet[i][1]; 
                transpose[k][1] = triplet[i][0]; 
                transpose[k][2] = triplet[i][2];
                k++;
            }
        }
    }

    cout << "Transpose Triplet\n";
    for (int i = 0; i <= t; i++) {
        cout << transpose[i][0] << " " 
             << transpose[i][1] << " " 
             << transpose[i][2] << "\n";
    }
    return 0;
}
