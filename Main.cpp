#include <iostream>
using namespace std;
int main(void)
{
	int  i = 0, j = 0, c=0, d=0, m = 0, n = 0, z[20][20];
vvod:
	cout << "m="; //ввод количества строк
	cin >> m;
	cout << "n="; //ввод количества столбцов
	cin >> n;
	if ((n <= 0) || (m <= 0)) {
		cout << ("Kolichestvo strok/stolbcov matricy ne mozhet ne byt' polozhitel'nym chislom!") << endl; goto vvod;
	}
	else if ((n <= 0) && (m <= 0)) {
		cout << ("Kolichestvo strok/stolbcov matricy ne mozhet ne byt' polozhitel'nym chislom!") << endl; goto vvod;
	}
	// см. выше: обработка ошибок
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++)
		{
			if (m % 2>0) c = (m / 2) + 1; else c = m / 2;
			if (n % 2>0) d = (n / 2) + 1; else d = n / 2;
			if (i<c && j<d)
			{
				if (j <= i)
					z[i][j] = j + 1;
				else
					z[i][j] = i + 1;
			}
			else
			{
				if (i<c)
					z[i][j] = z[i][n - j - 1];
				else
					z[i][j] = z[m - i - 1][n - j - 1];
			}
		}
	}
	for (i = 0; i<m; i++)
	{
		//цикл по переменной i, в котором перебираем строки матрицы
		for (j = 0; j<n; j++)
			cout << z[i][j] << "\t"; //вывод очередного элемента матрицы
		cout << endl; //переход на новую строку после вывода всех элементов строки
	}
	system("pause");
	return 0;
}