#include <iostream>

using namespace std;

int main()
{
  int  ones[20];
  ones[0] = 0;
  ones[1] = 3;
  ones[2] = 3;
  ones[3] = 5;
  ones[4] = 4;
  ones[5] = 4;
  ones[6] = 3;
  ones[7] = 5;
  ones[8] = 5;
  ones[9] = 4;
  ones[10] = 3;
  ones[11] = 6;
  ones[12] = 6;
  ones[13] = 8;
  ones[14] = 8;
  ones[15] = 7;
  ones[16] = 7;
  ones[17] = 9;
  ones[18] = 8;
  ones[19] = 8;
  
  int tens[10];
  tens[0] = 0;
  tens[1] = 0;
  tens[2] = 6;
  tens[3] = 6;
  tens[4] = 5;
  tens[5] = 5;
  tens[6] = 5;
  tens[7] = 7;
  tens[8] = 6;
  tens[9] = 6;
  int hundred = 7;
  int thousand = 8;

  int num = 1;
  int total = 0;
  int append;
  for (int i = 1; i < 1000; i++){
    int sum = 0;
    append = 0;
    num = i;
    bool hundredFlag = 0;
    if ( (num - (num%100)) != 0 ) {sum+=ones[(num/100)] + hundred; num = (num - (100*(num/100))); hundredFlag = 1; }
    if ( (num - (num%10)) > 0 ) { 
      if (num > 19) {
        append = 1;
        sum+= tens[(num/10)]; 
        num = (num - (10*(num/10)));
      }
    }
    sum += ones[num];
    if (((num > 0) && hundredFlag) || ((append == 1) && hundredFlag)){sum += 3;}
    total += sum;
    cout << i << ":" << sum << endl;
  }
  total += ones[1] + thousand;
  cout << total << endl;
  return 0;
}
