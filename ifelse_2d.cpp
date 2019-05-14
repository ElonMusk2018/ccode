// ifelse_2d.cpp
//compile gcc nameoffile -o nameoffile.o
// ./nameoffile.o

#include <iostream>
#include <stdio.h>
using namespace std; 


int main()
{
		int r,c;//row and column
		char thechar; 
		char w = 'O';
		char x = 'N';
		char y = 'E';
		char z = 'P';
		char a = 'I';
		char b = 'E';
		char t = 'C';
		char d = 'E';
		int val = 0;
		int m[8][8] = {
			{1,2,3,4,5,6,7,8} ,
			{1,2,3,4,5,6,7,8} ,
			{1,2,3,4,5,6,7,8} ,
			{1,2,3,4,5,6,7,8} ,
			{1,2,3,4,5,6,7,8} ,
			{1,2,3,4,5,6,7,8} ,
			{1,2,3,4,5,6,7,8},
			{1,2,3,4,5,6,7,8}
		};

		  for (r = 0; r < 8; r++){
			for (c = 0; c < 8; c++){
			  val = m[r][c];
			  if (val == 1){
				  thechar = w;}
				  else if (val == 2){
				  thechar = x;}
				  else if (val == 3){
					thechar = y;}
				  else if (val == 4){
					thechar = z;}
				  else if (val == 5){
				    thechar = a;}
				  else if (val == 6){
					thechar = b;}
				  else if (val == 7){
					thechar = t;}
				  else if (val == 8){
					thechar = d;}
				  else{
				  thechar = z;}
				  cout<<thechar;
			}//end c
		  cout<<"\n";
			printf("\n");
		}//end r
	return 0;
}
