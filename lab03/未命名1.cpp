/*YUKvdPOohWmIcy3YJoYeiXiIc5AvK4vVj1L oDxNNryqCgTgJu24k1nCj7ELXrjJCs2aUCmUkzIo9dpvbb46FwlTbeNxozOtBYe0syTYWFMl6J11M5aA8o0Dj2mRuk1 vv1AP9agjvuTmC880Y3 UPQAlMRxsKGzoduqgRB*/
#include<iostream>
#include<string> 
using namespace std;

int main(){
	string s; cin >> s;
	for(int i = 0; i < s.length(); i++){
		cout << hex << (int)s[i] << " ";
	}
	cout << endl;
	/*
	for(int i = 0; i < 256; i++){
		switch(i){
			case 0x69: cout << 2;break;
			case 0x73: cout << 1;break;
			case 0x71: cout << 9;break;
			case 0x6a: cout << 1;break; //[0]
			case 0x79: cout << 2;break; // [8]
			case 0x65: cout << 0;break;
			case 0x7a: cout << 0;break;
			case 0x6f: cout << 2;break;
			case 0x70: cout << 9;break;
			default: cout << "1" ;
		}
	}
	cout << endl;
	*/
	return 0;
} 
