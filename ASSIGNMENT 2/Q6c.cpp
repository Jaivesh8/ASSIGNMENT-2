#include <iostream>
using namespace std;

int main() {
    int m, n, p, q; 
    cout<<"enter no of rows and cols" ; 
    cin >> m >> n;    
    int A[100][3];
    cout<<"enter no of nonzeros in A";
    cin >> A[0][2];   
    A[0][0] = m; A[0][1] = n;
    cout<<"enter (rows cols val) for A";
    for (int i = 1; i <= A[0][2]; i++) {
        cin >> A[i][0] >> A[i][1] >> A[i][2]; 
    }
    cout<<"enter no of rows and cols for B" ;
    cin >> p >> q;    
    int B[100][3];
    cout<<"enter no of nonzeros in B";
    cin >> B[0][2];
    B[0][0] = p; B[0][1] = q;
    cout<<"enter (rows cols val) for B";
    for (int i = 1; i <= B[0][2]; i++) {
        cin >> B[i][0] >> B[i][1] >> B[i][2]; 
    }
    if (n != p) {
        cout << "Multiplication not possible\n";
        return 0;
    }
    int C[100][3];
    C[0][0] = m; 
    C[0][1] = q;
    int ccount = 0;
    for (int i = 1; i <= A[0][2]; i++) {
        for (int j = 1; j <= B[0][2]; j++) {
            if (A[i][1] == B[j][0]) {   
                int row = A[i][0];
                int col = B[j][1];
                int val = A[i][2] * B[j][2];

                int found = 0;
                for (int k = 1; k <= ccount; k++) {
                    if (C[k][0] == row && C[k][1] == col) {
                        C[k][2] += val;
                        found = 1;
                        break;
                    }
                }

                
                if (!found && val != 0) {
                    ccount++;
                    C[ccount][0] = row;
                    C[ccount][1] = col;
                    C[ccount][2] = val;
                }
            }
        }
    }
    C[0][2] = ccount;
    cout << "Resultant matrix in 3-tuple form:\n";
    for (int i = 0; i <= ccount; i++) {
        cout << C[i][0] << " " << C[i][1] << " " << C[i][2] << "\n";
    }

    return 0;
}


