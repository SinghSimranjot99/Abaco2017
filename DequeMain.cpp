#include <iostream>
#include <deque>

using namespace std;

int main(int argc, char **argv)
{
	deque <int> d1;
	d1.push_back(122);
	d1.push_back(211);
	d1.push_back(23);
	
	for(deque <int> :: iterator it = d1.begin();it!=d1.end();it++)
		cout<<*it<<endl;
	return 0;
}
