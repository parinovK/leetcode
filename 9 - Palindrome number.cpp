// atn.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }
    stringstream test;
    while (x % 10 != 0) {
        test << x % 10;
        x /= 10;
    }
    string temp = test.str();
    reverse(temp.begin(), temp.end());
    if (temp[0] == 0) {
        return false;
    }
    if (test.str() == temp) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{
    cout << isPalindrome(121);
}

/*
Решение для LeetCode:
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        stringstream test;
        while (x % 10 != 0) {
            test << x % 10;
            x /= 10;
        }
        string temp = test.str();
        reverse(temp.begin(), temp.end());
        if (temp[0] == 0) {
             return false;
        }
        if (test.str() == temp) {
            return true;
        }
        else {
            return false;
        }
    }
};
*/
