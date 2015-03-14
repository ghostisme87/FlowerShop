#include <iostream>
#include "Shop.h"
#include <crtdbg.h>

int main()
{
	{
		Shop shop;
		shop.Run();
	}
	if(_CrtDumpMemoryLeaks())
	{
		std::cout << "Error: Memory leaks" << std::endl;
	}
	else
	{
		std::cout << "All memory back" << std::endl;
	}


	return 0;
}
