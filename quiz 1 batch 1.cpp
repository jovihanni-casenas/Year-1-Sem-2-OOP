#include <iostream>
#include <cstring>
#include <sstream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Pattern{
	private:
		string put, word, piece;
		int find, count=0;
	public:
		void input();
		void breakString();
};

int main(int argc, char** argv) {
	Pattern pat;
	pat.input();
	pat.breakString();
	return 0;
}

void Pattern::input(){
	cout<<"Input string: ";
	getline(cin, put);
	cout<<"Input pattern: ";
	getline(cin, word);
	cout<<"Number of pattern found: ";
}

void Pattern::breakString(){
	stringstream ss(put);
	while(ss>>piece){
		find=piece.find(word, 0);
		if(find>=0) count++;
	}
	cout<<count;
}
