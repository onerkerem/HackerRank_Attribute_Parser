#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void main() {

	string string1, string2, string3;

	//std::basic_istream::getline(cin, string1);

	cin >> string1;

	string2 = string1;

	string1.erase(0, 1);
	string1.pop_back();

	cout << string1 << endl;

	cout << string2 << endl;

	int start_position_to_erase = string2.find(string1);
	int number_of_symbols = string1.size();

	string2.erase(start_position_to_erase, number_of_symbols);

	cout << string2 << endl;

	

}
