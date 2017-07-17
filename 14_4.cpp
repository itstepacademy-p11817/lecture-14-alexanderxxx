#include <iostream>
#include <stdlib.h>

int main()
{
	setlocale(0, "");
	long long a = 0, b = 1;
	std::cin >> a;
	for (; b <= 10000000000000000000; b++)
	{
		if (a%(b*b) == 0 && a%(b*b*b) != 0)
		{
			std::cout << b << " ";
		}
	}
	system("pause");
	return 0;
}