#include <iostream>
#include <stdlib.h>

int main()
{
	setlocale(0, "");
	int v = 0;
	std::cout << "Количество клеток: ";
	std::cin >> v;
	for (int t = 0; t<8; t++)
	{
		if (t % 2 == 0)
		{
			for (int z = v; z>0; z--)
			{
				for (int f = 0; f < 8; f++)
				{
					for (int i = v; i > 0; i--)
					{
						std::cout << "*";
					}

					for (int i = v; i > 0; i--)
					{
						std::cout << " ";
					}
				}
				std::cout << '\n';
			}
		}
		else
		{
			for (int z = v; z>0; z--)
			{
				for (int f = 0; f < 8; f++)
				{
					for (int i = v; i > 0; i--)
					{
						std::cout << " ";
					}

					for (int i = v; i > 0; i--)
					{
						std::cout << "*";
					}
				}
				std::cout << '\n';
			}
		}
	}
	system("pause");
	return 0;
}