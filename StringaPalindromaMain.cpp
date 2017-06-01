#include <iostream>
#include <string>

using namespace std;

bool palindroma(string str);

int main(int argc, char **argv)
{
    string str;
	
	
	cout<<"Inserisci una stringa:"<<endl;
	cin>>str;
	while(cin.get()!='\n');
	
	
	if(palindroma(str)==true)
		cout<<"e' palindroma"<<endl;
	else
		cout<<"non e' palindroma"<<endl;
	
	return 0;
	
}

bool palindroma(string str){
	int i,j;
	for(i=0,j=str.size()-1;i<(str.size()/2)&&(j>str.size()/2);i++,j--){
	   if(str.at(i)!=str.at(j))
		   return false;
    }	   
	return true;
	
	/*
	 
	  //soluziine alterativa
	  if(str==string(str.rbegin(),str.rend()))
	    return true;
	  else
	  	 return false;
		  */ 
}
