#include <iostream>

using namespace std;



int main() {
	int matrix[3][3];
	
	for (int i = 0; i < 3; i++){ 
		for (int j = 0; j < 3; j++)
			cin >> matrix[i][j];
	}
	
	for (int i = 0; i < 3; i++){ 
		for (int j = 0; j < 3; j++)
			cout << matrix[i][j];
		cout << endl;
	}
	
	float a = matrix[0][0] * (matrix[1][1]  * matrix[2][2] - matrix[1][2] * matrix[2][1]);
	float b = matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]);
	float c = matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]); 
	
	float determinant = a - b + c;

	
	cout << "The determinant of the matrix is: " << determinant;
}
