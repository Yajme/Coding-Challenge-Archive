#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
   std::vector<int> move = input;

  for(int i = 0;i<move.size();i++){
    if(move.at(i) == 0){
      move.push_back(0);
      move.erase(move.begin()+i);
        
    }
  }

  return move;
}
