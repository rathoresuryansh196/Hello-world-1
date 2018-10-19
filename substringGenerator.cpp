#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	string s;
	cout<<"Enter a string: ";
	cin >> s;
	cout<<"Substrings of given string are \n";
	
	vector<string> sub;
	for(int i = 0; i<s.size(); i++) {
		string temp;
		for(int j = i; j<s.size(); j++) {
			temp = s.substr(i, j-i+1);
			sub.push_back(temp);
		}	
	}
	
	sort(sub.begin(), sub.end());
	
	for(int i = 0; i<sub.size(); i++) cout<<sub[i]<<'\n';
}
