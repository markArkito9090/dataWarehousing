//���� �������. ������� �� ������������, ����������� �� ������,
//���������� ���������� ���������� �����. ��� ��������� �� ��� -
//��� �� ����� �����. �������� ���������� ���������� ��������.

#include <iostream>
#include <iomanip>
#include "matrix_operations.h"

using namespace std;

int main() {
	setlocale(0, "RUS");
	int n;
	double det = 0;
	cout << "������� ����������� ���������� ������� A: ";
	cin >> n;
	cout << "������� ������� A: \n";
	double** original_matrix = input_source_matrix(n);
	//������� ������ � ���������� ���-��� �����, ����������� �� ������� ��������� ������������
	int row_with_nulls = finding_row_with_max_nulls(original_matrix, n);
	det = det_matrix(original_matrix, row_with_nulls, n);
	cout << "������������ ������� A = " << det;
	clear_memory(original_matrix, n);
	return 0;
}