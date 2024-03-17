#include <bits/stdc++.h>
using namespace std;
int sumOfRowCol(int N, int M, vector<vector<int>> A) {
    int test = min(N,M);
    for(int i = 0;i < test;i++){
    	int row = 0;
    	int col = 0;
    	for(int j = 0;j < test;j++){
    		row += A[i][j];
    		col += A[j][i];
    	}
    	if(row != col) return 0;
    }
    return 1;
}
int main(){
	vector<vector<int>> matrix = {{1,2},{2,1}};
	cout << sumOfRowCol(matrix.size(),matrix[0].size(),matrix) << endl;
}