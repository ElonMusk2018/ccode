// lb 8x8
#include <iostream>
#include <stdio.h>
int lb(); //define int lb(); function

int main()
{
	lb();//call lb function
	return 0;
}
// start of lb() function
int lb(){
	int r,c;//row and column
	int val = 0;
	int red, blue, green;
	int m[8][8] = {
	  {1,0,0,0,0,0,0,1} ,
	  {0,1,0,0,0,0,1,0} ,
	  {0,0,1,0,0,1,0,0} ,
	  {0,0,0,1,1,0,0,0} ,
	  {0,0,0,1,1,0,0,0} ,
	  {0,0,1,0,0,1,0,0} ,
	  {0,1,0,0,0,0,1,0} ,
	  {1,0,0,0,0,0,0,1} ,
		 };

		  red = 0; green = 0; blue = 0;
		  for (r = 0; r < 8; r++){
			for (c = 0; c < 8; c++){
			  val = m[r][c];
			    switch (val){
				  case 0:         
				   red = 0; green = 0; blue = 0;
			       break;
				  case 1:            
			       red = 219; green = 0; blue = 0;// red
				   break;
				  case 2:            
			       red = 255; green = 255; blue = 0;
				   break;
				  case 3:            
			   	   red = 255; green = 255; blue = 0;
				   break;
				  default:       
				   red = 255; green = 255; blue = 0;
				break;
			}//end select
			//output the colors
			std::cout<<"["<<red<<" "<<green<<" "<<blue<<"]";
			  }// end c
		    std::cout<<"\n";
		}//end r
	return 0;
}// end lb() function


