class Same {
public:
    static bool comp(std::vector<int>& a, std::vector<int>& b) {
        
        a = SquareRoot(a);
        b = SquareRoot(b);

        a = RemoveDuplicate(a);
        b = RemoveDuplicate(b);

       /* std::cout << "/=======================/" << "\n";
        std::cout << "a:{";
        for (size_t i = 0; i < a.size(); i++) {
            std::cout << a.at(i) << ((i < a.size() - 1) ? ", " : "");
        }
        std::cout << "}\n\n";
        std::cout << "b:{";
        for (size_t i = 0; i < b.size(); i++) {
            std::cout << b.at(i) << ((i < b.size() - 1) ? ", " : "");
        }
        std::cout << "}\n";
        std::cout << "/=======================/" << "\n";
        std::cout << "=======================" << "\n";*/
        return (a == b);
    }

    static std::vector<int> SquareRoot(std::vector<int>& a) {

        for (size_t i = 0; i < a.size(); i++) {
            if (a.at(i) < 0) a.at(i) *= -1;
            if (isPerfectSquare(a.at(i))) {
                if (a.at(i) < 100) {
                    a.at(i) = (isPerfectSquare(std::sqrt(a.at(i)))) ? std::sqrt(a.at(i)) : a.at(i);
                }
                while (a.at(i) >= 100 && isPerfectSquare(a.at(i))) {
                    a.at(i) = std::sqrt(a.at(i));
                }
                //a.at(i) = (a.at(i) < 100) ? std::sqrt(a.at(i)) : a.at(i);
            }

        }

        return a;
    }



    static std::vector<int> RemoveDuplicate(std::vector<int>& a) {
        std::sort(a.begin(), a.end());
        a.erase(std::unique(a.begin(), a.end()), a.end());
        return a;
    }

    static bool isPerfectSquare(int num) {
        int sqrtNum = static_cast<int>(std::sqrt(num));
        return (sqrtNum * sqrtNum == num);
    }
};


std::string test(bool subject, bool testcase) {


    return (subject == testcase) ? "Passed" : "Failed";
}
int main()
{
    Same same;
    int counter = 1;
    //Test1
    std::vector<int> a = { 121, 144, 19, 161, 19, 144, 19, 11 };
    std::vector<int> b = { 14641, 20736, 361, 25921, 361, 20736, 361, 121 };
    std::cout << "Test" <<counter++ <<": "<< test(same.comp(a, b), true) << std::endl;
    //test2
    a={211, 465, 65, 190, 267, 359, 191, 330, 174, 109, 54, 137, 256, 304 };
    b={2916, 4225, 11881, 18769, 30276, 36100, 36481, 44521, 65536, 71289, 92416, 108900, 128881, 216225 };
    std::cout << "Test" << counter++ << ": " << test(same.comp(a, b), true) << std::endl;

    //test3
    a = { 354, 480, 239, 324, 114, 11, 419, 271, 109, 109, 29 };
    b = { 121, 130, 11881, 11881, 12996, 57121, 73441, 104976, 125316, 175561, 230400 };
    std::cout << "Test" << counter++ << ": " << test(same.comp(a, b), false) << std::endl;

    a = { 174, -42, -133, 296, 432, 79, 484, 464, 78, 491, -63, 30, 90, 23, 425 };
    b= {156, 900, 1764, 3969, 6084, 6241, 8100, 17689, 30276, 87616, 180625, 186624, 215296, 234256, 241081};
    std::cout << "Test" << counter++ << ": " << test(same.comp(a, b), false) << std::endl;

    a = { 429, 365, 43, 88, 440, 164, -70, 171, 257, 125, 424, 232, 302, 220 };
b = { 247, 4900, 7744, 15625, 26896, 29241, 48400, 53824, 66049, 91204, 133225, 179776, 184041, 193600 };
std::cout << "Test" << counter++ << ": " << test(same.comp(a, b), false) << std::endl;
a = { -121, 1440, 191, 161, 19, 144, 195, 11 };

b = { 121, 14641, 2073600, 36481, 25921, 361, 20736, 38025 };
std::cout << "Test" << counter++ << ": " << test(same.comp(a, b), true) << std::endl;
    return 0;
}
