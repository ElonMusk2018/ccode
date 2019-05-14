// ifelse_2d.cpp
//compile gcc nameoffile -o nameoffile.o
// ./nameoffile.o

#include <iostream>
#include <stdio.h>
using namespace std; 


int main()
{
		int r,c;//row and column
		;int val = 0;
		char thechar;
		char red = '1';
		char green = '2';
		char blue = '3';
		char white = '0';
		int m[8][8] = {
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
			{0,0,0,0,0,0,0,0} ,
		 };

		  red = 0; green = 0; blue = 0;
		  for (r = 0; r < 8; r++){
			for (c = 0; c < 8; c++){
			  val = m[r][c];
			    switch ( val ) {
				  case 0:          // Note the colon, not a semicolon
				   red = 0; green = 0; blue = 0;
			       break;
				  case 1:            // Note the colon, not a semicolon
			       red = 255; green = 255; blue = 0;
				   break;
				  case 2:            // Note the colon, not a semicolon
			       red = 255; green = 255; blue = 0;
				   break;
				  case 3:            // Note the colon, not a semicolon
			   	   red = 255; green = 255; blue = 0;
				   break;
				  default:            // Note the colon, not a semicolon
				   white = " 0 ";
				break;
			  }
				  cout<<word;

			}//end c
		  cout<<"\n";

		}//end r
	return 0;
}


