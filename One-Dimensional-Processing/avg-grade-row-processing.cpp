#include <iostream>
using namespace std;

int main() {
	int row, col;
	cin >> row >> col;
	
	int gradeTable[row][col];
	
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> gradeTable[i][j];
			
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << gradeTable[i][j];
			if (j < col - 1) cout << " ,";
		}
			
		cout << endl;
	}
			
	// Find average of 1st, 2nd, and 3rd rows
	for (int i = 0; i < row; i++) {
		float currentRow = 0;
		for (int k = 0; k < col; k++){ 
			currentRow += gradeTable[i][k];
		}
		cout << "Row " << i << " has an average grade of : " << currentRow/col << endl; 
	}
	
}
