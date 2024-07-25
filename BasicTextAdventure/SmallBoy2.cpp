#include "SmallBoy2.h"
#include <iostream>

SmallBoy2::SmallBoy2()
{
}

SmallBoy2::SmallBoy2(String name) :Item(name)
{

}

SmallBoy2::~SmallBoy2()
{
}

void SmallBoy2::Use(String _playerInput)
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

void SmallBoy2::Description() const
{
	std::cout << "\n\tA small boy with both his hands, much cooler then Hayden. ";
}
