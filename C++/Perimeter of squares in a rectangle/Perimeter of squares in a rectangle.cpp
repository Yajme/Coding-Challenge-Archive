#include<iostream>
#include<vector>

typedef unsigned long long ull;

class SumFct
{
  public:
  static ull perimeter(int n){
    ull perimeter = 0;
    std::vector<ull> num;
    num.push_back(1);
    for(int i = 0;i<n+1;i++){
        perimeter += num.at(i);
        if(i==0){
            num.push_back(1);
        }else{
            num.push_back(num.at(i) + num.at(i-1));
        }
    }
    return perimeter*4;
  };
};

int main(){

    SumFct f;
    ull s = f.perimeter(7);

    std::cout << std::endl;
    std::cout << s;
}
