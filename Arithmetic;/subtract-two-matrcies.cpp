#include <iostream>
using namespace std;

int main() {
	int row, col;
	cin >> row >> col;
	
	int mat1[row][col], mat2[row][col], mat3[row][col];
	
	cout << "Enter values for first matrix: \n";
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> mat1[i][j];
	
	cout << "Enter values for second matrix: \n";
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> mat2[i][j];
			
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			mat3[i][j] = mat1[i][j] - mat2[i][j];
	
	cout << "The first matrix subtracted by the second matrix: \n";
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++)
			cout << mat3[i][j];
		cout << endl;
	}
		
}
