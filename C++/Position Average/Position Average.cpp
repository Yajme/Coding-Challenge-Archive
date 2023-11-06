#include <string>
#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
double posAverage(const std::string& s) {
    std::string str = s;
    str.erase(std::remove_if(str.begin(), str.end(), ::isspace), str.end());
    std::vector<std::string> container;
    int stringSize = str.size();
    std::string num = "";

    for (int i = 0; i < stringSize; i++) {
        if (i < str.size() && str[i] == ',') {
            container.push_back(num);
            num = "";
        }
        else {
            num += str[i];
        }
    }

    if (!num.empty()) {
        container.push_back(num);
    }

    int match = 0;
    int all = 0;

    for (int i = 0; i < container.size()-1; i++) {
        for (int j = i + 1; j < container.size(); j++) {
            for (size_t k = 0; k < container[i].size(); k++) {
                if (container[i][k] == container[j][k]) {
                    match++;
                }
                else {
                    all++;
                }
            }
        }
    }
    

    double result = ((match) / (static_cast<double>(match) + all)) * 100;

    return result;
}
