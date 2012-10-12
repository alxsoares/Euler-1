#include <iostream>
using namespace std;

int gridStep(int x, int y, int endx, int endy){
  if ( (x==endx)&&(y==endy) ) return 1;
  int total = 0;
  if (x != endx){total += gridStep(x+1, y, endx, endy);}
  if (y != endy){total += gridStep(x, y+1, endx, endy);}
  return total;
}

int main(){
  unsigned long int total = 0;
  unsigned long int totals[11];
  for (int i = 0; i <= 10; i++){
    cout << gridStep(10+i,10,20,20)-gridStep(10,10+i,20,20) << endl;
    totals[i] = gridStep(10+i, 10, 20, 20);
  }

  total += gridStep(0,0,10,10)*totals[0];
  for (int i = 1; i <= 10; i++){
    total += ((gridStep(0,0,10,10+i)-(gridStep(0,0,10,10+i-1)))*totals[i])*2;
  }
  cout << total << endl;
  return 0;
}

