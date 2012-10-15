#include <iostream>

using namespace std;

unsigned long long int numItrs(int xn);

int main()
{
  unsigned long long int max = 0;
  unsigned long long int curr;
  for(int i = 1; i < 1000000; i++){
    curr = numItrs(i);
    
    if (curr > max){
      cout << i << ":" << curr << endl;
      max = curr;
    }
  }
  return 0;
}

unsigned long long int numItrs(int xn){
  unsigned long long int n = xn;
  unsigned long long int total = 1;
  while (n != 1){
    total +=1;
    if(n%2) //Odd
    {
      n = (3*n) +1;
    }else{
      n = n/2;
    }
  }
  return total;
}
