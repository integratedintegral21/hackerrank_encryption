#include <iostream>
#include <math.h>

using namespace std;

string encryption(string s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			s.erase(i, 1);
		}
	}
	int rows = int(floor(sqrt(s.size())));
	int cols = int(ceil(sqrt(s.size())));

	if (rows * cols < s.size()) {
		rows++;
	}

	string encrypted = "";

	for (int col_index = 0; col_index < cols; col_index++) {
		for (int row_index = 0; row_index < rows; row_index++) {
			if (row_index * cols + col_index < s.size()) {
				encrypted = encrypted + s[row_index * cols + col_index];
			}
		}
		encrypted = encrypted + " ";
	}

	return encrypted;
}

int main() {
	cout << encryption("chillout");
	return 0;
}