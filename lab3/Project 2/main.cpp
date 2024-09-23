/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
   double x, y; // declare type double variables
   
   std::cout<< "Enter the value for x: "; //display to user
   std::cin>>x; // user iput
   std::cout<<"\n"; // new line
   
   std::cout<< "Enter the value for y: "; // display to user
   std::cin>>y; // user input
   std::cout<<"\n"; // new line
   
   double *pointx = &x; // pointer to x
   double *pointy = &y; // pointer to y
   double sum = *pointx + *pointy;
   
   std::cout<< "The sum is :" << sum << "\n";
   
   return 0;
}