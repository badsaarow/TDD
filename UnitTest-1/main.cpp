
#include <iostream>
#include "main.h"

int main()
{
    int a = 1;
    int b = 2;
    int sum = add(a, b);
    std::cout << a << "+" << b << "=" << sum;
    if (sum == a + b)
	{
		std::cout << " is correct." << std::endl;
	}
	else
	{
		std::cout << " is wrong." << std::endl;
	}
}
