#pragma once

#ifndef UTIL_H
#define UTIL_H

#include <vector>
#include <stdlib.h>
#include <ctime>
#include <iostream>

namespace Util 
{
	inline std::vector<int> g_sorted_array(int start);
	inline void print_vector(std::vector<int> v);
};

namespace Util 
{
	std::vector<int> g_sorted_array(int start, int length) 
	{
		std::srand(std::time(0));
		std::vector<int> sorted_vector;
		int random_value = start;
		for (int i = 0; i <= length; i++)
		{
			random_value = std::rand() % (1000 - random_value) + random_value;
			sorted_vector.push_back(random_value);
		}
		return sorted_vector;
	}
	
	void print_vector(std::vector<int> v)
	{
		for (int i = 0; i < v.size(); i++) {
			std::cout << v[i] << "\t";
		}
	}
};


#endif