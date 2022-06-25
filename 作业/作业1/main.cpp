#include<iostream>
using namespace std;

typedef unsigned int uint32_t;
typedef unsigned short uint16_t;

union INT{
	uint32_t val;
	int ival;
};

union SHORT{
	uint16_t val;
	short sval;
};

void t9(){
	INT x, y; x.ival = -32768;
	y.val = 0xffff8000;
	printf("x = %x = %d\n",x.val, y.ival);
	SHORT a, b; a.sval = 522;
	printf("a = %x = %d",a.val, a.sval);
	return ;
}

int main(){
	t9();
	return 0;
}
