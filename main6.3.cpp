//�������� ���������, �������� �������� ��������� ��������� �X+�=�.
//��������� ��������, ������ ������������� ���������� ����������.
//���� ������� A, B, C. ����� X.

// A = / 1 0\  B = /2  1\  C = /3  2\
//     \-1 1/      \1 -3/      \1 -4/

#include <iostream>
#include <iomanip>
#include "matrix_operations.h"

using namespace std;

int main() {
	setlocale(0, "RUS");
	int n = 2;

	cout << "������� ������� A: \n";
	double** matrix_a = input_source_matrix(n);

	cout << "������� ������� B: \n";
	double** matrix_b = input_source_matrix(n);

	cout << "������� ������� C: \n";
	double** matrix_c = input_source_matrix(n);
	
	//������� ���������
	//AX + B = C
	//AX = C - B
	//X = �������� � A ������� * ������� C - B
	//X = A^(-1) * (C - B)

	double** matrix_x = create_zero_matrix(n);
	matrix_x = evaluation_matrix_X(matrix_a, matrix_b, matrix_c, n);
	cout << "������� �: " << endl;
	matrix_output(matrix_x, n);

	clear_memory(matrix_a, n);
	clear_memory(matrix_b, n);
	clear_memory(matrix_c, n);
	clear_memory(matrix_x, n);

	return 0;
}