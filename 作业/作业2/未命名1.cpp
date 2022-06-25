void func(int *xptr, int *yptr, int *zptr) {
	int tempx = *xptr;
	int tempy = *yptr;
	int tempz = *zptr;
	*xptr = tempz;
	*yptr = tempx;
	*zptr = tempy;
}

int f1(unsigned x){
	int y = 0;
	while(x != 0){
		y ^= x;
		x >>= 1;
	} 
	return y & 0x1;
}

unsigned test(char a, unsigned short b, unsigned short c, short* p){
	*p = a;
	return b * c;
}

void np_init(struct node* np){
	np->s.x = np->s.y;
	np->p = &(np->s.x);
	np->next = np;
}

int lproc(int x, int k){
	int val = 255;
	int i;
	for(int i = -2147483648; i !=; i = (unsigned) i >> k){
		val ^= (i & x);
	}
	return val;
}

void chain_proc(union node *uptr){
	uptr->n2.next->n1.data1 = *(uptr->n2.next->n1.prt) - uptr->n2.data2;
}
