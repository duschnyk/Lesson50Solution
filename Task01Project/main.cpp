#include "util.h"
#include "logic.h"

int main() {
	int matrix[SIZE][SIZE];
	int size;

	cout << "Input matrix size: ";
	cin >> size;

	init(matrix, size, 0, 100);
	cout << "Matrix:\n" << convert(matrix, size);

	cout << "sum upper main diag: " 
		<< sum_elements_upper_main_diagonale(matrix, size) << endl;

	cout << "sum below main diag: "
		<< sum_elements_below_main_diagonale(matrix, size) << endl;
	
	cout << "sum upper add diag: "
		<< sum_elements_upper_additional_diagonale(matrix, size) << endl;

	cout << "sum below add diag: "
		<< sum_elements_below_additional_diagonale(matrix, size) << endl;


	system("pause");

	return 0;
}

