// 18. Search for a key in a row-wise and column-wise sorted 2D matrix.
#include<iostream>
using namespace std;

bool searchInMatrix(int matrix[][100], int rows, int cols, int key, int &foundRow, int &foundCol) {
    int i = 0, j = cols - 1;

    while (i < rows && j >= 0) {
        if (matrix[i][j] == key) {
            foundRow = i;
            foundCol = j;
            return true;
        }
        else if (matrix[i][j] > key) {
            j--;
        }
        else {
            i++;
        }
    }
    return false;
}

int main() {
    int matrix[100][100];
    int rows, cols, key;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    cout << "Enter matrix elements (sorted row-wise & column-wise):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter the key to search: ";
    cin >> key;

    int foundRow = -1, foundCol = -1;
    if (searchInMatrix(matrix, rows, cols, key, foundRow, foundCol)) {
        cout << "Key " << key << " found at position: (" << foundRow << ", " << foundCol << ")\n";
    } else {
        cout << "Key " << key << " not found in the matrix.\n";
    }

    return 0;
}
