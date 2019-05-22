#include <iostream>
using namespace std;
void main()
{
	int **arr = new int *[10];
	for (int i = 0; i < 10; i++)
		arr[i] = new int[5];

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = i * 2;
			cout << arr[i][j] << '\t';
		}
		cout << endl;
	}

	for (int i = 0; i < 10; i++)
		delete[] arr[i];
	delete[] arr;

	system("pause");
}