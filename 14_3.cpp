#include <iostream>
#include <stdlib.h>

int main()
{
	setlocale(0, "");
	long long v1 = 0, v2=0;
	std::cin >> v1;
	std::cin >> v2;
	for (int i = 1; i < 10000000000000000000; i++)
	{
		if (v1%i == 0 && v2%i == 0)
		{
			std::cout << i << " ";
		}
	}
	system("pause");
	return 0;
}