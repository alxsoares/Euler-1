#include <iostream>
#include <fstream>

using namespace std;

#define MAX(a, b) (((a) > (b)) ? (a) : (b))

int readInt(ifstream & infile){
	int z = ((infile.get()-48)*10) + (infile.get()-48);
	infile.get();
	return z;
}

int main()
{
  ifstream infile("triangle.txt");
	int triangle[100][100];

	for (int i = 0; i < 100; i++){
		for (int y = 0; y < i+1; y++){
			triangle[i][y] = readInt(infile);
			//cout << triangle[i][y] << " ";
		}
		//cout << endl;
	}

	for (int i = 98; i >= 0; i--){
		for (int y = 0; y < i+1; y++){
			triangle[i][y] += MAX(triangle[i+1][y], triangle[i+1][y+1]);
			//cout << triangle[i][y];
			//cout << i << ", " << y;
			//cout << " ";
		}
		//cout << endl;
	}

	cout << triangle[0][0] << endl;

	return 0;
}
