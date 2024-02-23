//��������� ������������ �.� ���-13��
//��������� ������� f(A), ��� f(x) = x^3 + 2x^2 + 5x + 10, A - ���������� �������

#include <iostream>
#include <iomanip>
#include "matrix_operations.h"
using namespace std;

int main() {
	setlocale(0, "RUS");
	int n;
	cout << "������� ����������� ���������� ������� A: ";
	cin >> n;
	cout << '\n' << "������� ������� A: " << endl;
	double** source_matrix = input_source_matrix(n);
	double** res_matrix = function_evaluation(source_matrix, n);
	matrix_output(res_matrix, n);
	clear_memory(res_matrix, n);

	return 0;
}