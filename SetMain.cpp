#include <iostream>
#include <set>

using namespace std;

int main(int argc, char **argv)
{
	set<int> s1;
	s1.insert(12);
	s1.insert(34);
	s1.insert(23);
	for(set<int> :: iterator it = s1.begin();it!=s1.end();it++)
		cout<<(*it)<<endl;
	return 0;
}
