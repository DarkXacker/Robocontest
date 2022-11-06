#include <bits/stdc++.h>

#define vi vector<int>
#define SIZE 9

using namespace std;

bool is_magick(vi matrix) {
    int a[3][3], k=0;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            a[i][j] = matrix[k++];
        }
    }
    
    // sum of first row
    int sum = 0;
    for(int i=0; i<3; i++) sum+=a[0][i];
    
    for(int i=0; i<3; i++) {
        int tmp = 0;
        // sum of every row 
        for(int j=0; j<3; j++) {
            tmp += a[i][j];
        }
        
        if (tmp != sum) return false;
        tmp = 0;
        
        // sum of every column 
        for(int j=0; j<3; j++) {
            tmp += a[j][i];
        }
        if (tmp != sum) return false;
    }
    
    int tmp = 0;
    for(int i=0; i<3; i++) tmp+=a[i][i];
    if (tmp != sum) return false;
    
    tmp = 0;
    for(int i=0; i<3; i++) tmp+=a[3-i-1][i];
   
    return tmp == sum;
}

void generate_squares(vector<vi> &squares) {
    vi square(9);
    for(int i=0; i<SIZE; i++) square[i] = i+1;
    
    do {
        if (is_magick(square)) squares.push_back(square);
    }while(next_permutation(square.begin(), square.end()));
}

int diff(vi a, vi b) {
    int energy = 0;
    
    for(int i=0; i<SIZE; i++) {
        energy += abs(a[i]-b[i]);
    }
    
    return energy;
}

void print(vi square) {
    for(int i=0; i<SIZE; i++) {
        if(i%3 == 0) {
            cout << "\n";
        }
        cout << square[i] << " ";
    }
    cout << "\n====================================\n";
}

int solve(vi matrix) {
    vector<vi> squares;
    
    generate_squares(squares);
    
    int r = INT_MAX;
    
    for(int i=0; i<squares.size(); i++) {
        r = min(r, diff(matrix, squares[i]));
    }
    return r;
}

int main() {
    vi matrix(SIZE);
    
    for(int i=0; i<SIZE; i++) cin >> matrix[i];
    
    cout << solve(matrix);
}