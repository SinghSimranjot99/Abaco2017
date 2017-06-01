#include <iostream>
#include <list>
#include <string>

using namespace std;
int main(int argc, char **argv)
{
	list <string> l(3,"Ciao");
	
	for(list <string> :: iterator it = l.begin(); it!=l.end(); it++ )
		cout<<*it<<endl;
	return 0;
}
