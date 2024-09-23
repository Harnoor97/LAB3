/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

int main()
{
    
typedef int* VEC;      //declaring type alias for pointer to int

typedef VEC* MATRIX; //declaring type alias for pointer to VEC

int a = 5;        //declaring int varioable
VEC v = &a;      // v points to a
MATRIX m = &v;  // m points to m

std::cout<< "a using v: "<< *v << " and  a using m: "<< **m << "\n";



    return 0;
}