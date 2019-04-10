// g++ sinperiodamp.cpp -o sinperiodamp.cpp
#include <iostream>
#include <cmath>
using namespace std;

double round4(double var)
{	double value;
	 if (var < 0){
			value = (int)(var * 10000 - 0.00005);
		}
	else{
			value = (int)(var * 10000 + 0.0005);
		}
	return (double)value / 10000;
	
}
 
int main (){
double PI=3.1415926535897932;
double a,p,t, rad, sr,aspr;// theta in terms of degrees
// sr is sine results cr is cosine results
	count>>"\nInput and amplitude : ";
	cin>>a;
	count>>"Theta\tsin(t)\ta*sin(pt) \n";
	cin>>p;
	cout <<"Theta\tsin(t)\ta*sin(pt) \n";
	for ( t=0 ; t<360; t = t + 15 ){
		rad = t * (PI / 180);
		sr = sin(rad);
		aspr = a*sin(p*t);
		cout<<t<<"\t"<<sr<<"\t"<<"aspr"<<"\n";
	return 0;
}
