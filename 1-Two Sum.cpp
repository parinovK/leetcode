// deci-binary.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
/*

*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
	vector<int> digits;
	string input;
	string token;
	cout << "digits: ";
	getline(cin, input);
	int target;
	cout << "target: ";
	cin >> target;
	stringstream ss(input);
	char separator = ' ';
	while (getline(ss, token, separator)) {
		digits.push_back(stoi(token));
	}

	//находим сумму
	int temp[2];
	bool status = false;
	for (int i = 0; i < digits.size(); i++) {
		for (int j = digits.size() - 1; j >= 0; j--) {
			if (digits[i] + digits[j] == target) {
				status = true;
				temp[1] = i;
				temp[0] = j;
			}
		}
	}
	
	if (status) {
		cout << "[" << temp[0] << "," << temp[1] << "]";
	}
	else {
		cout << "digits is not found.";
	}
}

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	 vector<int> index;
	for (int i = 0; i < nums.size(); i++) {
	for (int j = 0; j < nums.size(); j++) {
		if (nums[i] + nums[j] == target && i!=j) {
		index.push_back(j);
		index.push_back(i);
		return index;
		}
	}
	}
	throw invalid_argument("sum not found");
	}
};
*/
