/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h> 
#include <time.h> 
  
// A function that terminates when enter key is pressed 
void fun() 
{ 
    
} 
  
// The main program calls fun() and measures time taken by fun() 
int main() 
{ 
    // Calculate the time taken by fun() 
    clock_t t; 
    t = clock(); 
    fun(); 
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
  
    printf("fun() took %f seconds to execute \n", time_taken); 
    return 0; 
} 

