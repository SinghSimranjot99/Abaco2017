#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	map <int,string> m1;
	m1 [10] = "Ciao";
	m1 [16] = "Come";
	m1 [2] = "stai ?";
	
	for(map<int,string> :: iterator it = m1.begin();it!=m1.end();it++)
		cout<<(*it).first<<"\t"<<(*it).second<<endl;
		
	return 0;
}
