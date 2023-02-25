#include <iostream>

using namespace std;

void upper(int matrix[][4], int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (j >= i) {
                cout << matrix[i][j] << " ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main() {
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int N = 4;
    upper(arr, N);
    return 0;
}
