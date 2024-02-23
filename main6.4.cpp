//��������� ������� f(A), ��� f(x) = x^3 + 2x^2 + 5x + 10, A - ���������� �������

#include <iostream>
#include <iomanip>
#include "matrix_operations.h"
using namespace std;

template <class T>
T read_and_check(T a)
{
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
		cout << "������� ���������� ������: " << endl;
		cin >> a;
	}
	return a;
}

int main() 
{
	setlocale(0, "RUS");
	int n = 0; 
	double det = 0;

	cout << "������� ������ �������� ������: \n";
	cin >> n;
	n = read_and_check(n);

	if (n < 1)
	{
		cout << "������ ������� �� ����� ���� ������ 1 " << endl;
		system("pause");
		exit(0);
	}

	/*================================================================*/

	// ������� 6.4.1

	cout << "������� ������� A: \n";
	double** matrix_a = input_source_matrix(n, "A");

	cout << "������� ������� B: \n";
	double** matrix_b = input_source_matrix(n, "B");

	//double** res_matrix_a = function_evaluation(new_matrix_a(matrix_a, n), n, "A\'");
	//matrix_output(res_matrix_a, n, "A\'");

	//double** res_matrix_b = function_evaluation(multiply_matrix_by_matrix(matrix_a, matrix_b, n), n, "B\'");
	//matrix_output(res_matrix_b, n, "B\'");

	/////*=================================================================*///

	//// ������� 6.4.2

	////������� ������ � ���������� ���-��� �����, ����������� �� ������� ��������� ������������
	//int row_with_nulls = finding_row_with_max_nulls(res_matrix_a, n);
	//det = det_matrix(res_matrix_a, row_with_nulls, n);

	//cout << "������������ ������� A' = " << det << endl;

	/////*==================================================================*///

	//// ������� 6.4.3

	cout << "������� ������� C: \n";
	double** matrix_c = input_source_matrix(n, "C");

	/*������� ���������
	AX + B = C
	AX = C - B
	X = �������� � A ������� * ������� C - B
	X = A^(-1) * (C - B)*/

	/*double** matrix_x = create_zero_matrix(n);
	matrix_x = evaluation_matrix_X(res_matrix_a, res_matrix_b, matrix_c, n);
	cout << "������� �: " << endl;
	matrix_output(matrix_x, n, "X");*/

	//double** matrix_x = create_zero_matrix(n);
	//if (evaluation_matrix_X(matrix_a, matrix_b, matrix_c, n) != 0) 
	//{
	//	cout << "������� �: " << endl;
	//	matrix_output(evaluation_matrix_X(matrix_a, matrix_b, matrix_c, n), n, "X");
	//}

	if (evaluation_matrix_X(matrix_a, matrix_b, matrix_c, n) != 0)
		double** matrix_x = evaluation_matrix_X(matrix_a, matrix_b, matrix_c, n);
	else
		cout << "�������� ������� �� ����������!\n";


	/*
	end_clear_memory(res_matrix_a, res_matrix_b, matrix_a, matrix_b, matrix_c, n);
	*/

	system("pause");
	return 0;
}