#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argv)
{
    vector<int> v(4,100);
    
	for(vector<int> :: iterator it=v.begin();it!=v.end() ;it++)
       cout<<*it<<endl;
	   
	vector<int> v1 ;
	v1.push_back(1);
	cout<<*v1.begin()<<endl;
	return 0;
}
