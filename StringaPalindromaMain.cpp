#include <iostream>s
#include <stdio.h>
#include <string>
#include <vector>
#include <time.h>

#define BENCH_ITERATIONS 100

using namespace std;

bool checkPalindrome_v1(const string &theString);

bool checkPalindrome_v2(const string &theString);

bool checkPalindrome_v3(const string &theString);

int main(int argc, char **argv)
{
    /*string str;                         //CREAZIONE E INIZIALIZZAZIONE STRINGA
	cout<<"Inserisci una stringa:"<<endl;
	cin>>str;
	while(cin.get()!='\n');
	*/
	cin.get();
	clock_t t1_start,t1_stop,t2_start,t2_stop,t3_start,t3_stop;
	double runTimeMillisec_1,runTimeMillisec_2,runTimeMillisec_3;
	
	vector<string> v1;
	v1.push_back("ciao");
	v1.push_back("anna");
	v1.push_back("inipotinonavevanotopi");
	v1.push_back("itopinonavevanonipoti");
	
	
	//cout<<endl<<"VERSIONE 1 :"<<endl<<endl;
	t1_start = clock();
	for(int i=0;i<BENCH_ITERATIONS;i++){
		for(int j=0;j<v1.size();j++){
		   checkPalindrome_v1(v1[j]); //PROVA VERSIONE 1 
		}
	}
	t1_stop = clock();
	
	//cout<<endl<<"VERSIONE 2"<<endl<<endl;
	t2_start = clock();
	for(int i=0;i<BENCH_ITERATIONS;i++){
	   for(int j=0;j<v1.size();j++){
		   checkPalindrome_v2(v1[j]);  //PROVA VERSIONE 2 			
		}
 	}   
	t2_stop = clock();
 
	//cout<<endl<<"VERSIONE 3"<<endl<<endl;
	t3_start = clock();
	for(int i=0;i<BENCH_ITERATIONS;i++){
		for(int j=0;j<v1.size();j++){
		   checkPalindrome_v3(v1[j]);  //PROVA VERSIONE 3 
		}
    }	
	t3_stop = clock();
	
	runTimeMillisec_1 = (double)(t1_stop-t1_start)/CLOCKS_PER_SEC;
	runTimeMillisec_2 = (double)(t2_stop-t2_start)/CLOCKS_PER_SEC;
	runTimeMillisec_3 = (double)(t3_stop-t3_start)/CLOCKS_PER_SEC;
	
	cout<<"VERSIONE 1 TEMPO:"<<runTimeMillisec_1*1000<<endl;
	cout<<"VERSIONE 2 TEMPO:"<<runTimeMillisec_2*1000<<endl;
	cout<<"VERSIONE 3 TEMPO:"<<runTimeMillisec_3*1000<<endl;
	
	
	/*if(equal(str.begin(),str.end(),str.rbegin()))  //confronta la sequenza di caratteri che si sono tra begin e end con quelli della rbegin
		cout<<"palindroma"<<endl;
	else
		cout<<"non e' palindroma"<<endl;	
	*/
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