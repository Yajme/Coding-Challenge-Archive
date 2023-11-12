
    #include <iostream>
    #include<vector>
    #include<string>
    #include<algorithm>
    /*

    Actual: [ "alive", "armstrong", "codewars", "harp", "lively", "sharp" ] <- Array2
    Actual: [ "bed", "cod", "code", "ewar", "phht", "pillow", "wars" ] <-array1

    Expected: equal to [ "cod", "code", "ewar", "wars" ]

    */

    class WhichAreIn
    {

    public:
        static std::vector<std::string> inArray(std::vector<std::string>& array1, std::vector<std::string>& array2) {
            //string.substr(0,limit)

            std::vector<std::string> matched;
            for (size_t i = 0; i < array2.size(); i++) {
                for (size_t j = 0; j < array1.size(); j++) {
                    for (size_t k = 0; k < array2[i].length(); k++) {
                        if (array2[i].length() > array1[j].length()) {
                            int lp = array1[j].length();
                            if (array2[i].substr(k, lp) == array1[j]) {
                                matched.push_back(array1[j]);
                            }
                        }
                    }
                }
            }

            if (matched.size() > 0) {
                std::sort(matched.begin(), matched.end());
                matched.erase(std::unique(matched.begin(), matched.end()), matched.end());

            }
            return matched;
        }


    };
