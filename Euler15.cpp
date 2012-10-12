#include <iostream>
using namespace std;

int gridStep(int x, int y){
  cout << "trying (" << x << "," << y << ")\n";
  if ( (x==20)&&(y==20) ) return 1;
  int total = 0;
  if (x != 20){total += gridStep(x+1, y);}
  if (y != 20){total += gridStep(x, y+1);}
  return total;
}

int main(){
  cout << gridStep(0,0) << endl;
  return 0;
}

