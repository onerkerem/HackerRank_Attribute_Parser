#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
template <typename S>

// with_separator() function accepts
// two  arguments i.e., a vector and
// a separator string
void with_separator(const vector<S>& vec,
	string sep = " ")
{
	// Iterating over all elements of vector
	for (auto elem : vec) {
		cout << elem << sep;
	}

	cout << endl;
}


int main() {

	string string1, string2, string3, string4;
	/*
	vector<string> tags;

	cin >> string1 >> string2;

	string2 = "." + string2;

	cout << string1 << endl << string2 << endl;

	tags.push_back(string1);
	tags.push_back(string2);

	cout << tags.back() << endl;
	*/

	getline(cin, string1);

	cout << string1 << endl;

	//string1 = string1.substr(0, string1.size()-1);

	string1.pop_back();
	string1.erase(0, 1);

	cout << string1;




	return 0;
}
