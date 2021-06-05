#include <iostream>
#include <stack>
#include <queue>
using namespace std;;
int main(){
	stack <int> S;
	queue <int> Q;
	S.push(10);
	S.push(8);
	S.push(6);
	S.push(4);
	S.push(2);
	
	cout << "Stack: " << endl;
	while(!S.empty()){
		cout <<S.top() << endl;
		Q.push(S.top());
		S.pop();
		
	}
	
	cout <<"Queue: " << endl;
	while(!Q.empty()){
		cout<<Q.front() << endl;
		S.push(Q.front());
		Q.pop();
	}
	cout << "stack: " << endl;
	stack <int> s1;
	s1 = S;
	while(!s1.empty()){
		cout << s1.top() << endl;
		s1.pop();
	}
}