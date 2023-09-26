// atn.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

bool isPalindrome(int x) {
    bool check = false;
    if (x < 0) {
        return false;
    }
    stringstream test;
    while (x != 0) {
        test << x % 10;
        x /= 10;
    }
    string temp = test.str();
    reverse(temp.begin(), temp.end());
    if (test.str() == temp) {
        check = true;
    }
    return check;
}

int main()
{
    int digit;
    cin >> digit;
    cout << isPalindrome(digit);
}

/*
class Solution {
public:
    bool isPalindrome(int x) {
        bool check = false;
        if (x < 0) {
            return false;
        }
        stringstream test;
        while (x != 0) {
            test << x % 10;
            x /= 10;
        }
        string temp = test.str();
        reverse(temp.begin(), temp.end());
        if (test.str() == temp) {
            check = true;
        }
        return check;
    }
};*/
