#include <iostream>
using namespace std;
void ArrayEnter(int n, int m, int a[100][100]) {
	int j, i;
	cout << "Введите элементы матрицы" << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> a[i][j];
}
void ArrayOutput(int n, int m, int a[100][100]) {
	int i, j;
	cout << " массив: " << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
}
void CheckMax(int n, int m, int a[100][100]) {
	int j, i, jMax, temp, max = a[0][0];
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < m; j++) 
		{
			jMax = 0;
			if (a[i][j] > max) 
			{
				max = a[i][j];
				jMax = j;
			}
		}
		temp = a[i][0];
		a[i][0] = max;
		a[i][jMax] = temp;
		max = a[i + 1][0];

	}
}
void CheckMin(int n, int m, int a[100][100]) {
	int j, i, jMin, temp, min = a[0][1];
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < m; j++) 
		{
			jMin = 1;
			if (a[i][j] < min) 
			{
				min = a[i][j];
				jMin = j;
			}
		}
		temp = a[i][1];
		a[i][1] = min;
		a[i][jMin] = temp;
		min = a[i + 1][1];

	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, m;
	int a[100][100];
	cout << "Введите количество строк: ";
	cin >> n;
	cout << "Введите количество столбцов: ";
	cin >> m;
	ArrayEnter(n, m, a);
	cout << "Неисправленный";
	ArrayOutput(n, m, a);
	CheckMax(n, m, a);
	CheckMin(n, m, a);
	cout << "Исправленный";
	ArrayOutput(n, m, a);
	return 0;
}