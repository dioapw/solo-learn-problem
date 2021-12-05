#include <bits/stdc++.h>
using namespace std;

isValid(char c){
	return !isalpha(c)&&c!=' ';
}

int main(){
	string s;
	getline(cin,s);
	
	s.erase(remove_if(s.begin(),s.end(),isValid),s.end());
	reverse(s.begin(),s.end());
	
	cout<<s;
	
	return 0;
}
