#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <ctime>

#define BENCH_ITERATIONS 1000000

using namespace std;

bool checkPalindrome_v1(const string &theString);

bool checkPalindrome_v2(const string &theString);

bool checkPalindrome_v3(const string &theString);

int doTest(vector<string> &toCheck,bool (*checkPalindromeFunz)(const string&));

int main(int argc, char **argv)
{
	vector<string> v1;
	v1.push_back("ciao");
	v1.push_back("anna");
	v1.push_back("inipotinonavevanotopi");
	v1.push_back("itopinonavevanonipoti");
    
	int runTimeMillisec_1 = doTest(v1,checkPalindrome_v1);
	int runTimeMillisec_2 = doTest(v1,checkPalindrome_v2);
	int runTimeMillisec_3 = doTest(v1,checkPalindrome_v3);
	
	cout<<"VERSIONE 1 TEMPO:"<<runTimeMillisec_1<<endl;
	cout<<"VERSIONE 2 TEMPO:"<<runTimeMillisec_2<<endl;
	cout<<"VERSIONE 3 TEMPO:"<<runTimeMillisec_3<<endl;

	return 0;
}

bool checkPalindrome_v1(const string &theString){
	int i,j;
	for(i=0,j=theString.size()-1;i<(theString.size()/2)&&(j>theString.size()/2);i++,j--){
	   if(theString.at(i)!=theString.at(j))
		   return false;
    }	   
	return true;
}

bool checkPalindrome_v2(const string &theString){
	 //soluziine alterativa
	  if(theString==string(theString.rbegin(),theString.rend()))
	    return true;
	  else
	  	 return false;
}

bool checkPalindrome_v3(const string &theString){
	return equal(theString.begin(),theString.begin()+theString.size()/2,theString.rbegin());
}

int doTest(vector<string> &toCheck,bool (*checkPalindromeFunz)(const string&)){
	clock_t t_start,t_stop;
	bool boolReturn=false,boolTest=true;
	int count=0;
	
	t_start = clock();
	for(int i=0;i<BENCH_ITERATIONS;i++){
		for(int j=0;j<toCheck.size();j++){
		   boolReturn=checkPalindromeFunz(toCheck[j]); 
		   if(boolReturn==boolTest){
			  count++;
		   }
		}
    }
	t_stop = clock();
	
	int temp=(((double)(t_stop-t_start))/CLOCKS_PER_SEC)*1000;
	cout<<count<<endl;
	return temp;
} 