#include <iostream>
using namespace std;
int main()
{
	int size = 3;
	int*dynamicarray = new int[size];
	int count = 0;
	while (true)
	{
		int value;
		int i = 0;
		cout << "enter values(-1 to exit)";
		cin >> value;
		if (value == -1)
		{
			break;
		}
		if (count == size)
		{
			size *= 3;
		}
		int* newdynamicarray = new int[size];
		for (int i = 0; i < 3; i++)
		{
			newdynamicarray[i] = dynamicarray[i];
		}
		delete[]dynamicarray;
		dynamicarray = newdynamicarray;
		dynamicarray[i] = value;
		i++;

	}
	for (int i = 0; i < 3; i++)
	{
		cout << dynamicarray[i];
	}
	system("pause");
	return 0;
}