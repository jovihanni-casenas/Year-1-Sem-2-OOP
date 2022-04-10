#include <iostream>
#include <string>
#include <sstream>
#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Say{
	private:
		string put, now;
		int i, len, count, recur=0, putnum;
	public:
		string input();
		void process(string x);
};

int main(int argc, char** argv) {
	Say see;
	string put=see.input();
	see.process(put);
	return 0;
}

string Say::input(){
	cout<<"Input: ";
	getline(cin, put);
	stringstream ss(put);
	ss>>putnum;
	cout<<"Output: \n";
	//cout<<put;
	return put;
}

void Say::process(string x){
	now="";
	count=1;
	len=x.length();
	for(i=0;i<len;i++){
		if(x[i]==x[i+1]) count++;
		else{
			cout<<count<<' '<<x[i]<<' ';
			stringstream cc;
			cc<<count;
			string countString=cc.str();
			now=now+countString+x[i];
			count=1;
		}
	} 
	cout<<'\n'; 
	recur++;
	if(recur<putnum) process(now);
}

