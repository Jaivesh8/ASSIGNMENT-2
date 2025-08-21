#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;
    int arr[r][c];
    cout << "Enter elements of the array:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];

    bool found = false;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            int val = arr[i][j];
            bool rowMin = true;
            bool colMax = true;

            for (int k = 0; k < c; k++) {
                if (arr[i][k] < val) rowMin = false;
            }
            for (int k = 0; k < r; k++) {
                if (arr[k][j] > val) colMax = false;
            }

            if (rowMin && colMax) {
                cout << "Saddle point: " << val << " at (" << i << "," << j << ")\n";
                found = true;
            }
        }
    }

    if (!found) cout << "No saddle point found\n";

    return 0;
}
