#include<iostream>
using namespace std;


union INT {
	uint32_t val;
	int ival;
};

union SHORT {
	uint16_t val;
	short sval;
};

union UINT {
	uint32_t val;
	unsigned int uval;
};

union CHAR {
	uint8_t val;
	char cval;
};

union FLOAT {
	uint32_t val;
	float fval;
};

union DOUBLE {
	uint64_t val;
	double fval;
};

void t9() {
	INT x, y; x.ival = -32768;
	y.val = 0xffff8000;
	printf("x = %x = %d\n", x.val, y.ival);
	SHORT a, b; a.sval = 522; b.val = 0x0020a;
	printf("a = %x = %d\n", a.val, b.sval);
	UINT c, d; c.uval = 65530; d.val = 0x0000fffa;
	printf("c = %08x = %d\n", c.val, d.uval);
	CHAR e, f; e.cval = '@'; f.val = 0x40;
	printf("d = %02x = %c\n", e.val, f.cval);
	FLOAT g, h; g.fval = -1.1; h.val = 0xbf8ccccd;
	printf("f = %08x = %f\n", g.val, g.fval);
	DOUBLE i, j; i.fval = 10.5; j.val = 0x4025000000000000;
	printf("i = %llx = %lf\n", i.val, j.fval);

	return;

}

void t10() {
	INT x; x.val = 0xffff0006;
	SHORT y; y.val = 0xdffc;
	UINT z; z.val = 0xfffffffa;
	CHAR c; c.val = 0x2a;
	FLOAT a; a.val = 0xc4480000;
	DOUBLE b; b.val = 0xc024800000000000;

	printf("x = %d\ny = %d\nz = %u\nc = %c\na = %f\nb = %lf\n", x.ival, y.sval, z.uval, c.cval, a.fval, b.fval);
	return;
}

void t11(SHORT x, SHORT y) {
	printf("x = %x, y = %x\n", x.val, y.val);
	printf("x^y = %x, x&y = %x, x|y = %x, ~x|~y = %x, x&!y = %x, x&&y = %x, x||y = %x, !x||!y = %x, x&&~y = %x\n\n"
		, x.sval ^ y.sval, x.sval & y.sval, x.sval | y.sval, ~x.sval | ~y.sval, x.sval & !y.sval, x.sval && y.sval, x.sval || y.sval, !x.sval || !y.sval, x.sval && ~y.sval);
}

/*40
float fpower2(int x) {
	unsigned exp, frac, u;

	if (x < -149) { //值太小，返回0.0
		exp = 0;
		frac = 0;
	}
	else if (x < -126) { //返回非规格化结果
		exp = 0;
		frac = 0x400000 >> (-x - 127);
	}
	else if (x < 128) {//返回规格化结果
		exp = x + 127;
		frac = 0;
	}
	else { //值太大，返回﹢∞
		exp = 255;
		frac = 0;
	}
	u = exp << 23 | frac;
	return u2f(u);
}
*/
int main() {
	/*
	SHORT x, y;
	x.val = 0x5f; y.val = 0xa0;
	t11(x, y);
	x.val = 0xc7; y.val = 0xf0;
	t11(x, y);
	x.val = 0x80; y.val = 0x7f;
	t11(x, y);
	x.val = 0x07; y.val = 0x55;
	t11(x, y);
	*/
	return 0;
}