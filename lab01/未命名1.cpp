#include<iostream>
#include<string>
using namespace std;

int fun4(int a, int b){
	int y = (((a + b) >> 31) + a + b) >> 1;
	return 0;
}

int main(){
	string s; s = 0x804a3bb;
	cout << s << endl;
	return 0;
} 
