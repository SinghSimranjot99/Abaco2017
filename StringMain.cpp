#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
	string s1 = "Hello Word";
	string s2("Ciao");
	string :: iterator it = s1.begin(); // creo un iteratore che punta all primo carattere della stringa s1
	
	for(;it!=s1.end();it++)
		cout<<*it<<" ";    // stampo la stringa
		
	cout<<endl<<s1.compare(s2)<<endl;
	
	
	cout<<s1<<'\t'<<s2<<endl;
	
	return 0;
}
