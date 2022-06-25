#include<iostream>
#include<string>
using namespace std;

int main(){
	string s; cin >> s;
	cout << s << endl;
	for(int i = 0; i < s.length(); i++){
		printf("%x ", int(s[i]));
	}
	cout << endl;
	return 0;
} 
