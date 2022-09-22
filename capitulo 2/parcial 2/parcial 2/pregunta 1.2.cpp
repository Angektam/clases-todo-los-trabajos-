#include <iostream>

int return9(), return7()
{
	return 7;
	
	{
		return 9;
	}
}

int main()
{
	std::cout << return7() + return9() << '\n';
	
	return 0;
}
