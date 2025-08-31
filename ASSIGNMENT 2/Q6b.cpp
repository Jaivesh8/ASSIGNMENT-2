#include <iostream>
using namespace std;

int main() {
    int m, n, t1, t2;
    cout << "Enter rows and cols of matrices: ";
    cin >> m >> n;

    cout << "Enter number of non-zero elements in A: ";
    cin >> t1;
    int A[100][3];
    A[0][0] = m; A[0][1] = n; A[0][2] = t1;
    cout << "Enter triplet form of A (row col val):\n";
    for (int i = 1; i <= t1; i++){
         cin >> A[i][0] >> A[i][1] >> A[i][2];
    }
    cout << "Enter number of non-zero elements in B: ";
    cin >> t2;
    int B[100][3];
    B[0][0] = m; B[0][1] = n; B[0][2] = t2;
    cout << "Enter triplet form of B (row col val):\n";
    for (int i = 1; i <= t2; i++){
         cin >> B[i][0] >> B[i][1] >> B[i][2];
    }
    int C[200][3];  
    C[0][0] = m; C[0][1] = n;
    int i = 1, j = 1, k = 1;

    while (i <= t1 && j <= t2) {
        if (A[i][0] < B[j][0] || (A[i][0] == B[j][0] && A[i][1] < B[j][1])) {
           
            C[k][0] = A[i][0];
            C[k][1] = A[i][1];
            C[k][2] = A[i][2];
            i++; k++;
        }
        else if (B[j][0] < A[i][0] || (B[j][0] == A[i][0] && B[j][1] < A[i][1])) {
           
            C[k][0] = B[j][0];
            C[k][1] = B[j][1];
            C[k][2] = B[j][2];
            j++; k++;
        }
        else {
            
            int sum = A[i][2] + B[j][2];
            if (sum != 0) {
                C[k][0] = A[i][0];
                C[k][1] = A[i][1];
                C[k][2] = sum;
                k++;
            }
            i++; j++;
        }
    }
    while (i <= t1) {
        C[k][0] = A[i][0];
        C[k][1] = A[i][1];
        C[k][2] = A[i][2];
        i++; k++;
    }
    while (j <= t2) {
        C[k][0] = B[j][0];
        C[k][1] = B[j][1];
        C[k][2] = B[j][2];
        j++; k++;
    }
    C[0][2] = k-1;  
    cout << "Resultant triplet matrix C:\n";
    for (int p = 0; p <= C[0][2]; p++) {
        cout << C[p][0] << " " << C[p][1] << " " << C[p][2] << "\n";
    }
    return 0;
}
