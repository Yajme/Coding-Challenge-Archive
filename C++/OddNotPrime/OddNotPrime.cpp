bool isPrime(unsigned int n){
  if(n<2) return false;
  
  for(unsigned int i = 3; (i*i) <=n;i+=2){
    if(n%i==0) return false;
  }
  return true;
  
}
unsigned int oddNotPrime(unsigned int n){
  unsigned int count = 0;
  for(unsigned int i = 1; i <= n;i++){
    if(i%2!=0) {
       
       if(!isPrime(i)){
           count++;
       }
        
    }
  }
  
  return count;
  
}
