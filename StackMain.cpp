#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char **argv)
{
	stack <int> s1;
	s1.push(23);
	s1.push(8);
	s1.push(453);
	s1.push(3);
	
	
	while(!s1.empty()){
		cout<<s1.top()<<endl;
		s1.pop();
	}
	
	return 0;
}
