#ifndef DATA_COLLECTOR_H
#define DATA_COLLECTOR_H 

#include <vector>

class Data_collector
{
public:
	unsigned int first_byte_address;
	unsigned int last_byte_address;
	std::vector<char> data;
};

#endif