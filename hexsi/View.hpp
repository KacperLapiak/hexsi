#ifndef VIEW_H
#define VIEW_H

#include "View_logic.hpp"

class View
{
private:
	int bytes_per_row;
	int bytes_per_column;
	int bytes_number;
	int vertical_division_sapce;

public:
	View(
		int bytes_per_row = 16,
		int bytes_per_column = 16,
		int bytes_number = 256,
		int vertical_division_space = 4);

	void calculate_bytes_number();
	void show_left_corner_cell();
	void show_top_bar();
	void show_left_address_cell();
	void show_data_byte();
	void show_row();
	void show_interpreter();
	void show_editor();

};

#endif