// ifelse_2d.cpp
//compile gcc nameoffile -o nameoffile.o
// ./nameoffile.o

#include <iostream>
#include <stdio.h>
using namespace std; 


int main()
{
		int r,c;//row and column
		string word ="MGILITNMOTSADOUIWLIAEOCU"
		;int val = 0;
		int m[8][8] = {
			{0,0,0,4,5,6,7,8} ,
			{0,0,0,4,5,6,7,8} ,
			{0,0,0,4,5,6,7,8} ,
			{0,0,0,4,5,6,7,8} ,
			{0,0,0,4,5,6,7,8} ,
			{0,0,0,4,5,6,7,8} ,
			{0,0,0,4,5,6,7,8},
			{0,0,0,4,5,6,7,8} 
		};

		  for (r = 0; r < 8; r++){
			for (c = 0; c < 8; c++){
			  val = m[r][c];
			    switch ( val ) {
						  case 4:          // Note the colon, not a semicolon
							word = "***";
							break;
						  case 5:            // Note the colon, not a semicolon
							word = "%%%";
							break;
						  case 6:            // Note the colon, not a semicolon
							word = "$$$";
							break;
						  case 7:            // Note the colon, not a semicolon
							word = "###";
							break;
						  default:            // Note the colon, not a semicolon
							word = " 0 ";
							break;
			  }
				  cout<<word;

			}//end c
		  cout<<"\n";

		}//end r
	return 0;
}
