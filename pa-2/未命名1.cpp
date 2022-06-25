#include<iostream>

using namespace std;

union FLOAT{
	unsigned int val;
	float fval;
};

union INT{
	unsigned int val;
	int ival;
};

int main(){
	int x = 1060896;
	printf("x = %x\n", x);
	return 0;
} 
