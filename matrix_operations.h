#ifndef MATRIX_OPERATIONS
#define MATRIX_OPERATIONS

#include <iostream>
#include <iomanip>
#include "matrix_operations.h"
using namespace std;

//�������� ������� ���������� �������
double** create_zero_matrix(int n);

// �������� ������������ �����
template <class T>
T read_and_check(T a);

//���� �������� ���������� ������� (source_matrix)
double** input_source_matrix(int n, const char *name_matrix);

// �������� ���������� �������
double** creating_matrix(int n);

//�������� ������
double** multiply_matrix_by_num(double** matrix, int num, int n);

//��������� ������� �� �����
double** sum_matrix_with_matrix(double** matrix1, double** matrix2, int n);

//�������� ������� � ������
double** sum_matrix_with_num(double** matrix, int num, int n);

//��������� ������
double** multiply_matrix_by_matrix(double** matrix1, double** matrix2, int n);

//���������� ������ � ���������� ���-��� �����
int finding_row_with_max_nulls(double** source_matrix, int n);

//���������� ������ �������, ���������� ������������� idx1 ������ � idx2 �������
void minor_matrix(double** matrix, double** source_matrix, int idx1, int idx2, int n);

//���������� ������������ ���������� �������
double det_matrix(double** matrix, int row, int n);

//������ ������� f(x) = x^3 + 2x^2 + 5x + 10
double** function_evaluation(double** source_matrix, int n, const char *name_matrix);

//���������� ������� A'
double **new_matrix_a(double** matrix_a, int n);

// ��������� ������� ��� i-� ������ � j-�� ������� (�. �. ����������������� ���������)
double** create_minor(double** matrix, int n, int row_idx, int column_idx);

// ���������� ������������ �������
double determinant(double** matrix, int n);

// �������� �������� �������
double** create_inverse_matrix(double** matrix, int n);

//���������� ������� X
double** evaluation_matrix_X(double** matrix_a, double** matrix_b, double** matrix_c, int n);

//����� �������
void matrix_output(double** matrix, int n, const char *name_matrix);

// �������� ������� ������
void end_clear_memory(double **res_matrix_a, double **res_matrix_b, double **matrix_a,
	double **matrix_b, double **matrix_c, int n);

//������� ����������� ���������� ������
void clear_memory(double** matrix, int n);

#endif MATRIX_OPERATIONS