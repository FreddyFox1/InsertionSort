/*
Суть алгоритма заключается в том что, на каждом шаге алгоритма мы берем
один из элементов массива, находим позицию для вставки и вставляем.
Время выполнения алгоритма зависит от входных данных:
чем большее множество нужно отсортировать, тем большее
время выполняется сортировка.
Также на время выполнения влияет исходная упорядоченность массива.

Временная сложность алгоритма при худшем варианте входных данных — O(n^2).
*/

#include <iostream>
using namespace std;

/// <summary>
/// Ввод пользователя размерности массива
/// </summary>
/// <returns>Возвращает размерность массива</returns>
int inputSize() {
	int _size;
	cout << "Введите размерность массива: ";
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
		cout << _array[i] << " ";
	cout << "\n";
}

/// <summary>
/// Ввод значений в массива
/// </summary>
/// <param name="_array">Ссылка на массив</param>
/// <param name="_Size">Количество элементов в массиве</param>
void inputArray(int* _array, int _Size) {
	for (int i = 1;i <= _Size;i++) {
		cout << "Arr[" << i << "]:=";
		cin >> _array[i];
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

	inputArray(array, size);
	cout << "Исходный массив \n";
	
	printArray(arr, size);
	build_minheap(arr, size);

	cout << "Отсортированный массив \n";
	printArray(array, size);
}

