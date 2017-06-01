#include <iostream>
#include <cmath>
#include </home/simranjot/Documenti/ProvaLibrerie/meanDynamic/meanDynamic.h>

using namespace std;

int main(int argc, char **argv)
{
	float a,b,c,ris1,ris2;
	
	cout<<"inserisci numero:"<<endl;
	cin>>a;
	//while(getchar()!='\n');
	
	cout<<"inserisci numero:"<<endl;
	cin>>b;
	//while(getchar()!='\n');
	
	cout<<"inserisci numero:"<<endl;
	cin>>c;
	//while(getchar()!='\n');
	
	ris1=((-1*b)+sqrtf(b*b-4*a*c))/(2*a);
	ris2=((-1*b)-sqrtf(b*b-4*a*c))/(2*a);
	
	cout<<"Il risultato e':"<<ris1<<endl<<"il risultato e':"<<ris2<<endl;
	
	cout<<"la medIA E' :"<<mean(a,b)<<endl;
	return 0;
}