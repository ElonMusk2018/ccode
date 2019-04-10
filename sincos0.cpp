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
double rad = 0;
double rad, t, sr, cr;// theta in terms of degrees
// sr is sine results cr is cosine results
	for ( t=0 ; t<360; t = t + 15 )
	{
		rad = t * (PI / 180);
		sr = sin(rad);
		sr = round4(sr);
		cr = cos(rad);
		c = sr*sr + cr * cr;
			cout <<t<<"\t\t"<<cr<<"\t\t"<<sr<<"\t\t"<<c<<"\n";
		
	}
	return 0;
}
