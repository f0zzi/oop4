#include <iostream>
using namespace std;

template <typename T, const int size>
void InitArray(T(&arr)[size])
{
	for (size_t i = 0; i < size; i++)
	{
		cout << "Enter " << i + 1 << " element of array: ";
		cin >> arr[i];
	}
}
template<typename T, const int size>
void ShowArray(T(&arr)[size])
{
	cout << "Array: ";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;
}
template<typename T>
int FindElement(const T arr[], int size, T element)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == element)
			return i;
	}
	return -1;
}
template<>
int FindElement(const char arr[], int size, char element)
{
	for (int i = 0; i < size; i++)
	{
		if (tolower(arr[i]) == tolower(element))
			return i;
	}
	return -1;
}
template<typename T>
void SortArray(T arr[], int size, bool sortByRising)
{
	T x;
	int j;
	for (int i = 0; i < size; i++)
	{
		x = arr[i];
		for (j = i - 1; j >= 0 && (sortByRising? arr[j] > x: arr[j] < x); j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = x;
	}
}
template<>
void SortArray(char arr[], int size, bool sortByRising)
{
	char x;
	int j;
	for (int i = 0; i < size; i++)
	{
		x = arr[i];
		for (j = i - 1; j >= 0 && (sortByRising ? tolower(arr[j]) > tolower(x): tolower(arr[j]) < tolower(x)); j--)
		{
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = x;
	}
}
int main()
{
	int arr[5];
	InitArray(arr);
	SortArray(arr, 5, false);
	ShowArray(arr);
	cout << FindElement(arr, 5, 7) << endl;
	char arr1[5]{ 'z', 'b', 'x', 'D', 'e' };
	ShowArray(arr1);
	cout << FindElement(arr1, 5, 'd') << endl;
	SortArray(arr1, 5, false);
	ShowArray(arr1);
	system("pause");
	return 0;
}