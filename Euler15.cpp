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
	cout << gridStep(0,0,20,20) << endl;
  return 0;
}

