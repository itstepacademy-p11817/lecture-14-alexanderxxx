#include <iostream>
#include <stdlib.h>

int main()
{
	setlocale(0, "");
	long long v = 0;
	std::cin >> v;
	for (int i = 1; i < 10000000000000000000; i++)
	{
		if (v%i == 0)
		{
			std::cout << i << " ";
		}
	}
	system("pause");
	return 0;
}