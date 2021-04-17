/*
Суть алгоритма заключается в том что, на каждом шаге алгоритма мы берем
один из элементов массива, находим позицию для вставки и вставляем.
Время выполнения алгоритма зависит от входных данных: чем большее
множество нужно отсортировать, тем большее время выполняется сортировка.
Также на время выполнения влияет исходная упорядоченность массива.

				Временная сложность:
	Худшее время — O(n^2).
	Лучшее время — O(n) сравнений, O(1) обмен
	Среднее время — О(n2) сравнений, обменов
	Затраты памяти — О(n) всего, O(1) вспомогательный
*/

#include <iostream>
using namespace std;

/// <summary>
/// Ввод пользователя размерности массива
/// </summary>
/// <returns>Возвращает размерность массива</returns>
int inputSize() {
	int _size;
	cout << "Введите размерность массива : ";
	cin >> _size;
	return _size;
}

/// <summary>
/// Вывод массива в консоль
/// </summary>
/// <param name="_array">Ссылка на массив для вывода</param>
/// <param name="_Size">Количество элементов в массиве</param>
void outputArray(int* _array, int _Size)
{
	for (int i = 1; i <= _Size; i++)
		cout << _array[i] << "    ";
	cout << "\n\n";
}

/// <summary>
/// Ввод значений в массива
/// </summary>
/// <param name="_array">Ссылка на массив</param>
/// <param name="_Size">Количество элементов в массиве</param>
void inputArray(int* _array, int _Size) {
	for (int i = 1;i <= _Size;i++) {
		cout << "Array[" << i << "]:=";
		cin >> _array[i];
	}
}

/// <summary>
/// Меняем местами два числа массива через локальную переменную temp
/// </summary>
/// <param name="_array">ссылка на массив</param>
/// <param name="i">Первое число</param>
/// <param name="j">Второе число</param>
void Swap(int* _array, int i, int j)
{
	int temp = _array[i];
	_array[i] = _array[j];
	_array[j] = temp;
}

/// <summary>
/// Алгоритм сортировки вставками
/// </summary>
/// <param name="_array">Ссылка на массив</param>
/// <param name="_Size">Количество элементов в массиве</param>
void InsertionSort(int* _array, int _Size)
{
	cout << "Шаги сортировки:" << "\n\n";
	int x;
	int j;
	for (int i = 1; i <= _Size; i++)
	{
		x = _array[i];
		j = i;
		while (j > 0 && _array[j - 1] > x)
		{
			Swap(_array, j, j - 1);
			j -= 1;
		}
		_array[j] = x;
		
		if (i > 1) {
			cout << "    i = " << i - 1 << "\t";
			outputArray(_array, _Size);
		}
	}
}

/// <summary>
/// Точка входа
/// </summary>
/// <returns></returns>
int main()
{
	//Установка русского языка
	setlocale(LC_ALL, "Russian");

	int size = inputSize();
	int* array = new int[size];

	cout << "Введите числа массива: \n";
	inputArray(array, size);

	cout << "Исходный массив \n";
	outputArray(array, size);

	InsertionSort(array, size);

	cout << "Отсортированный массив \n";
	outputArray(array, size);
}

