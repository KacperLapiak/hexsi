#include <iostream>
#include "View.hpp"

View::View(
	int bytes_per_row,
	int bytes_per_column,
	int bytes_number,
	int vertical_division_space) :
	bytes_per_row(bytes_per_row),
	bytes_per_column(bytes_per_column),
	bytes_number(bytes_number),
	vertical_division_sapce(vertical_division_space)
{
	show_editor();
}

void View::calculate_bytes_number()
{
	bytes_number = bytes_per_row * bytes_per_column;
}

void View::show_editor()
{
	show_top_bar();
	show_row();
	show_interpreter();
}

void View::show_top_bar() 
{
	show_left_corner_cell();

	int division_iterator = 0;
	for (int k = 0; k < bytes_per_row; k++)
	{
		if (division_iterator == vertical_division_sapce)
		{
			std::cout << " ";
			division_iterator = 0;
		}
		division_iterator++;

		std::cout << "xx ";
	}

	std::cout << "\n";
}

void View::show_row() 
{
	for (int j = 0; j < bytes_per_column; j++)
	{
		show_left_address_cell();

		int division_iterator = 0;
		for (int k = 0; k < bytes_per_row; k++)
		{
			if(division_iterator == vertical_division_sapce)
			{
				std::cout << " ";
				division_iterator = 0;
			}
			division_iterator++;

			show_data_byte();
		}

		std::cout << "\n";
	}
}

void View::show_left_corner_cell()
{
	std::cout << "0xffffffff|";
}

void View::show_left_address_cell()
{
	std::cout << "0xaaaaaaaa|";
}

void View::show_data_byte() 
{ 
	std::cout << "aa ";
}

void View::show_interpreter() 
{ 
	std::cout << "> ";
}

