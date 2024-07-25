#include "SmallBoy.h"
#include <iostream>

SmallBoy::SmallBoy()
{
}

SmallBoy::SmallBoy(String name) :Item(name)
{

}

SmallBoy::~SmallBoy()
{
}

void SmallBoy::Use(String _playerInput)
{
	if (_playerInput == "use")
	{
		std::cout << "\n\tyou command the small boy to entertain you.";
		std::cout << "\n\the does a funny little jig.";
		boyDancing = true;
		std::cout << "\n\tdo you want him to stop? [yes] [no]\n\t>";
		String newInput;
		newInput.ReadFromConsole().ToLower();
			
		if (newInput == "yes")
		{
			std::cout << "\n\tthe small boy enters a docile state once more.";
			boyDancing = false;
		}
		if (newInput == "no")
		{
			std::cout << "\n\tthe small boy keeps dancing. ";
		}
	}
}

void SmallBoy::Description() const
{
	std::cout << "\n\tA small boy missing both his hands, could prove useful. ";
}
