// Лаба6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int  N,k;
	cout<<"введите кол-во строк и столбцов: ";
	cin >> N;
	int matrix[100][100];
	cout << "Введите элементы матрицы: ";
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> matrix[i][j];
		}
	}
	for (j = 0;j < N;j++) {
		for (i = 0;i < N;i++) {
			if (matrix[i][j] == 0) {
				break;
			}
		}
		if (j == N) {
			k++
		}
	}
	cout << "Количество столбцов без нулевых элементов: " << count << endl;
	return 0;

	
		
}

