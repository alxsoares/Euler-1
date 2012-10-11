#include <iostream>

using namespace std;

int primes[2000000];

int tf = 0;

int main()
{
  primes[0] = 2;
  int totalPrimes = 1;
  int i = 2;
  int y;
  while(primes[totalPrimes-1] < 2000000){
    i++;
    for(y = 0; y < totalPrimes; y++){
      if (primes[y] != 0){
        if (i%primes[y] == 0){
          tf = 0;
          break;
        }else {
          tf = 1;
        }
      }
    }
    if (tf == 1){
      totalPrimes++;
      primes[totalPrimes] = i;
      //cout << i << endl;
    }
  }
  unsigned long int total = 0;
  for (int y = 0; y < totalPrimes-1; y++){
    total += primes[y];
  }
  cout << total << endl;
  return 0;
}
