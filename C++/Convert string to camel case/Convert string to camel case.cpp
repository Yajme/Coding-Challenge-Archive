
#include <iostream>
#include <string>
#include<cctype>
std::string to_camel_case(std::string texter) {
    std::string text = texter;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == '-' || text[i] == '_') {
            text.erase(i, 1);
            if (islower(text[i])){
               text[i] = toupper(text[i]);
            }
        }
    }
    return text;
}
int main()
{
    std::string testcase = to_camel_case("The-stealth-warrior");
    std::cout << testcase;
}

