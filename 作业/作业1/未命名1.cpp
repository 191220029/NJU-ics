#include<iostream>
using namespace std;

union FLOAT{
	unsigned int val;
	float fval;
};

int main(){
	FLOAT f; f.val = 0x4d158eae;
	cout << f.fval << endl;
	return 0;
}
