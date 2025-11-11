#include <iostream>
using namespace std;

int main() {
	int array[4][4] = 	{
							{1,1,1,1},
							{2,2,2,2},
							{3,3,3,3},
							{4,4,4,4},
						};
	
	for (int i = 0; i < 4; i++) {
		float rowSum = 0;
		for (int j = 0; j < 4; j++) {
			rowSum += array[i][j];
		}
		cout << "Sum of " << i << " Row is : " << rowSum << endl;
	}
	
	for (int i = 0; i < 4; i++) {
		float rowSum = 0;
		for (int j = 0; j < 4; j++) {
			rowSum += array[j][i];
		}
		cout << "Sum of " << i << " Column is : " << rowSum << endl;
	}
}
