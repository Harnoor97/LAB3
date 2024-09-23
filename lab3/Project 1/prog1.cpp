#include <iostream>

int dol, quart, dim, nic, pen; //  global variable for change

void change(int x) {
    x = 100 - x;
    dol = x/100; // amount of dollars
    x %= 100;    // remainder pennies
    
    quart = x/25;  //amount of quarters
    x %= 25;       //remainder pennies
    
    dim = x/10;   // amount of dimes
    x %= 10;     //remainder pennies
    
    nic = x/5;    //amount of nickles
    pen = x%5;    //remainder pennies
    
    std:: cout<<"Dollars: " <<dol<< " Quarters: "<< quart << " Dimes: "<< dim<<" Nickles: "    << nic<< " Pennies: "<< pen<<"\n";
    
} 

