#include <iostream>
#include "findMedianSortedArrays.h"
#include "util.h"

using namespace std;

int main() {
	vector<int> sorted_vector_1 = Util::g_sorted_array(0, 10);
	Util::print_vector(sorted_vector_1);
	cout << endl;
	vector<int> sorted_vector_2 = Util::g_sorted_array(0, 20);
	Util::print_vector(sorted_vector_2);
}