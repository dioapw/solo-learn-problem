#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	
	int sc = s.find(':');
	int num = stoi(s);

	if(s.at(s.length()-2)=='P' && num!=12){
		
		num+=12;	
			
	} else if (s.at(s.length()-2)=='A' && num==12) {
		
		num-=12;
		
	}
	
	if(num<10){
		
		std::cout << "0";
		
	}
	
	s.replace(0,sc,to_string(num));
	s.erase(s.length()-3,3);
	
	cout << s;
    return 0;
}
