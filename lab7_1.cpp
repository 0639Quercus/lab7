#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

string isPalindrome_str(string x){
	x = func3(x);
	int len = x.size();
	bool isPalindrome_bool = true;

	for (int i = 0; i < len; i++) {
		isPalindrome_bool &= (x[i] == x[len-i-1]);
	}
	
	if(isPalindrome_bool) {
		return "Yes";
	} else {
		return "No";
	}
}


int main(){
	string str;
    cout << "Input text: ";
	cin >> str;
    cout << "Reversed text: " << func1(str) << endl;
    cout << "Palindrome: "<< isPalindrome_str(str);
    return 0;
}
