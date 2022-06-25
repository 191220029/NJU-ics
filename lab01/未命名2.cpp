#include <iostream>
#include <math.h>
using namespace std;


int main(){
	long double L = 0.706, D = 2.8611, b = 0.058, d = 0.000694, s = 0.2259, F = 15*9.8, pi = 3.1415926535897932384626433832795;
	
	long double E, sigD, sigL, sigd, sigB, sigS, sigE;
	long double sD = 0.0005, sL = 0.0005, sb = 0, sd = 0.120e-3, ss = 0.0005;
	long double lnb = 2.847312268435717715453470210233;
	long double lns = 2.3990959933748894422241199989876;
	
	
	E = (8 * L * D * F)/(pi * d * d * b * s);
	cout << "E = " << E << endl;
	
	sigD = (8 * L * F * sD)/(pi * d * d * b * s);
	cout << "sig(D) = " << sigD << endl;
	
	sigL = (8 * D * F * sL)/(pi * d * d * b * s);
	cout << "sig(L)/1 = " << sigL << endl;

	sigd = (8 * L * D * F * sd)/(pi * b * d * d * d  * s);
	cout << "sig(d) = " << sigd << endl;	
	
	sigB = (8 * L * D * F * lnb)/(pi * d * d * s);
	cout << "sig(b)/sb = " << sigB << endl;
	
	sigS = (8 * L * D * F * ss * 5)/(pi * d * d * b * s * s);
	cout << "sig(s) = " << sigS << endl;
	
	sigE = sqrt(sigD * sigD + sigL * sigL + sigd * sigd + sigS * sigS);
	cout << "sig(E1) = " << sigE << endl;
	
	sigE = sqrt(sigD * sigD + sigL * sigL + sigd * sigd + sigS * sigS);
	cout << "sig(E2) = " << sigE << endl;
	
	long double y  = sigE * 100 / E;
	cout << "y1 = " << y << "%" << endl;
	y = sigE * 100 / 1.26e11;
	cout << "y2 = " << y << "%" << endl;
	
	
	return 0;
} 
