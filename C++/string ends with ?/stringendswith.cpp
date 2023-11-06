#include <string>
#include<iostream>


bool solution(std::string str, std::string ending) {
    int count = ending.length();
    int position = str.length() - ending.length();
    if (str.length() < ending.length()) position = 0;
    if (str.compare(position, count, ending, 0, count) == 0) return true;
    return false;
}
