#include <cmath>
#include <iostream>
using namespace std;


int main()
{
	setlocale(0, "Rus");
	int n, m;
	cout << "Введите кол-во строчек: ";
	cin >> n;
	cout << "Введите кол-во столбцов: ";
	cin >> m;
	int* min = new int[n];
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

			arr[i][j] = rand() % 10 - 5;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << endl;

		}
		cout << endl;
	}
	int x = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		int x = arr[i][0];
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] < 0)
			{
				if (arr[i][j] < x)
				{
					x = arr[i][j];

				}
				min[i] = x;
			}
		}
		cout << endl;
	}

	for (int i = 0; i < n; i++)
	{
		cout << min[i];
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	system("pause");
	return 0;
}