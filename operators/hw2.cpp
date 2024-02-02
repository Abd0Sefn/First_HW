#include<iostream>
using namespace std;

int main() {

	int a = 1, b = 1, c;                    //   a   b   c
                                            //   1   1   2
	cout<<(c = a+b, a = b, b = c,           //   1   2   3
		   c = a+b, a = b, b = c,           //   2   3   5
		   c = a+b, a = b, b = c,           //   3   5   8
		   c = a+b, a = b, b = c) <<endl;   // get back with 8 as it is the last expression after a comma

	return 0;
}
