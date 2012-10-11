#include <iostream>
using namespace std;

bool done = false;
int z = 0;
int tri;
int divisors;

int findTri(int n);
int findDiv(int t);

int main()
{
  while(!done){
    z++;
    if ((z%3 != 0) && (z%4 != 0)) continue;
    tri = findTri(z);
    divisors = findDiv(tri);
    if (z%1000 == 0){
      cout << "z:" << z << " = " << tri << "; Div:" << divisors << endl;
    }
    if (divisors > 500) { done = true; }
  }

  cout << tri << endl;
  return 0;
}

int findDiv(int t){
  int sum = 0;
  for (int i = 1; i <= t/2; i++){
    if (t%i == 0){
      if (t/i > t/2) sum += 2;
      else sum++;
    }
  }
  return sum;
}

int findTri(int n){
  int sum = 0;
  for (int i = 1; i <= n; i++){
    sum += i;
  }
  return sum;
}
