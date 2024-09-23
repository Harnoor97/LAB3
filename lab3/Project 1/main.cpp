/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

//declaring extern variables from prog.cpp
extern int dol;
extern int quart; 
extern int dim;
extern int nic;
extern int pen;

//declaring extern variables from prog1.cpp
extern void change(int x);

int main() {
int x ; // local variable for value given by the user

std::cout << " Enter a positive integer <= 100: "; // display message to user

std::cin >>x; //get user input

change(x);// apply the function 

return 0;
}


    
