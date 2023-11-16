class Kata {
  public:
  static bool validate(long long int n) {
    std::string ccn = std::to_string(n);
    std::vector<int> validation;
    int clength = ccn.length();
    unsigned int index = 0;//odd start of string 
    if(clength%2!=0){//in even
      index = 1;
    }
    for(int i = 0; i < clength; i++){
      int value = ccn[i] - '0';
      validation.push_back(value);
    }
    for(size_t i = index; i < validation.size(); i+=2){
     validation[i]*=2;
     if(validation[i] > 9) validation[i] = (validation[i]/10) + (validation[i]%10);
    }
    int sum = 0;
    for(auto& a : validation) sum+=a;    
    return sum%10==0;
  }
};
