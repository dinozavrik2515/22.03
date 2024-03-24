#include <iostream>

int main()
{
	int arr[5][5]{};

	for (int i = 0; i < 5; i++)
	{
		int num;
		std::cout << "Enter number: ";
		std::cin >> num;
		arr[i][0] = num;

		for (int j = 1; j < 5; j++)
		{
			arr[i][j] = arr[i][j - 1] * 2;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "\n";
	}

	int arr[5][5]{};

	for (int i = 0; i < 5; i++)
	{
		int num;
		std::cout << "Enter number: ";
		std::cin >> num;
		arr[i][0] = num;

		for (int j = 1; j < 5; j++)
		{
			arr[i][j] = arr[i][j - 1] + 1;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << arr[i][j] << "\t";
		}
		std::cout << "\n";
	}
}

