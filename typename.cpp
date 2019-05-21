#include<iostream>
using namespace std;
template<typename T>
void reverse(const T list[], T newList[], int size)
{
	for (int i = 0, j = size - 1; i < size; i++,j--)
	{
		newList[j] = list[i];
	}
}
template<typename T>
void printArray(T list[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << " ";
	}
}
int main()
{
	const int size = 6;
	char list1[] = { 'a','b','c','d','e','f' };
	char newList1[size];
	double list2[] = { 1.1,2.2,3.3,4.4,5.5,6.6 };
	double newList2[size];

	reverse(list1, newList1, size);
	reverse(list2, newList2, size);

	cout << "The original array:";
	printArray(list1, size);
	cout <<endl<< "The reversed array:";
	printArray(newList1, size);
	cout <<endl<< "The original array:";
	printArray(list2, size);
	cout <<endl<< "The reversed array:";
	printArray(newList2, size);

	system("pause");
	return 0;
}