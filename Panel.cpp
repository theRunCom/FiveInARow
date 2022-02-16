#include <iostream>
#include "Panel.h"

Panel::Panel()
{

}

void Panel::initial()
{
	// Initializes the chessboard array.
	for (int i = 0; i < this->P_size; i++)
	{
		for (int j = 0; j < this->P_size; j++)
		{
			this->size[i][j] = 0;
		}
	}
}

void Panel::print()
{
	// Print Board serial number.
	std::cout << "    ";
	for (int i = 0; i < this->P_size; i++)
	{
		if (i < 10)
			std::cout << "0" << i << "   ";
		else
			std::cout << i << "   ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	// Print the board line by line.
	for (int i = 0; i < this->P_size; i++)
	{
		// Print the line number of the board.
		if (i < 10)
			std::cout << "0" << i << "   ";
		else
			std::cout << i << "   ";

		for (int j = 0; j < this->P_size; j++)
		{
			if (this->size[i][j] == -1)
				std::cout << "¡ñ" << "   ";
			else if (this->size[i][j] == 1)
				std::cout << "¡ð" << "   ";
			else
				std::cout << "Ê®" << "   ";
		}
		std::cout << "|" << std::endl;
		// There is a blank line between the lines.
		std::cout << std::endl;
	}
}

Panel::~Panel()
{

}