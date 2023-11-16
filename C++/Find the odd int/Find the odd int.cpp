#include<iostream>
#include<vector>
#include<algorithm>

class Odd{
    public:
    int num;
    int count;
};

int findOdd(const std::vector<int>& numbers){
    Odd* odd;
    odd = new Odd[100];
    int size = 0;
    
    std::vector<int> n = numbers;
    
    std::sort(n.begin(),n.end());
    
    n.erase(std::unique(n.begin(),n.end()), n.end());
    
    for(int i = 0; i < n.size();i++){
        odd[i].num = n[i];
        odd[i].count = 0;
        size++;
    }
    
    for(size_t i = 0;i < numbers.size();i++){
        for(size_t j = 0;j <size;j++){
          if(numbers[i] == odd[j].num){
              odd[j].count++;
          }
        }
    }
    
    int max = 0;
    for(int i = 0;i<size;i++){
        max = (odd[i].count%2!=0) ? odd[i].num : max;
        //std::cout << odd[i].count << std::endl;
    }
    
    return max;
    
}
