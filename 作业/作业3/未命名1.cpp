#include<iostream>
#include"proc1.cpp"
using namespace std;

unsigned x = 257;
short y, z = 2;
void proc1(void);

union DOUBLE{
	double lfval;
	unsigned val[2];
};

int main(){
	DOUBLE d;
	d.lfval = -1.5;
	printf("%lf => %08x%08x\n", d.lfval, d.val[0], d.val[1]);
	
	proc1();
	printf("x = %u, z = %d\n", x, z);
	return 0;
}
