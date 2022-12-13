#include<iostream>
#include<string>

using namespace std;

string func1(string x){ //revert
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){ //Upper
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){ // lower
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

void palincheck(string text){
	string Ltext = func3(text);
	int i = text.size(),j=0,k=0;
	while (j<i/2)
	{
		if(Ltext[j]==Ltext[i-j-1])
		{
			k++;
		}
		j++;
	}
	if(k==i/2)
	{
		cout << "Yes";
	}else{
		cout <<"No";
	}
	return;
}

int main(){
	string text;
    cout << "Input text: ";
	cin >> text ;
    cout << "Reversed text: " << func1(text) << endl;
	cout << "Palindrome: " ;
	palincheck(text);

    return 0;
}
