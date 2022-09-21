#include <iostream>

int add(int x, int y)
{
	return x + y;
}

void printResult(int z)
{
	std::cout << "la respuesta es:" << z << '\n';
	
}
int getUserInput()

{ 
    std::cout << "ingrese un numero: ";
    int x{};
    std:: cin >> x;
    return --x;
}

int main()
{
	int X{getUserInput() };
	int y{getUserInput() };
	
	int z {add(z, y)};
	printResult(z);
	
	return 0;
}
