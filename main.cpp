//
//  main.cpp
//  
//
//  Created by Asher Abrams on 2018/1/22.
//  Copyright © 2018 Asher Abrams. All rights reserved.
//  2018K29 05:35.  This code generates a list of Fibonacci numbers.
//  2018L03 19:08.  Created in Xcode.
//

//  PREPROCESSOR
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

//  DECLARATIONS
long int a=0;
long int b=1;
long int c=0;
long int i=1;

//  MAIN
int main(int argc, const char * argv[]) {
    // Fibonacci numbers
    
    for (i=1; i <= 40; i++)
    {
        a = b;
        b = c;
        c = a + b;
        cout << c <<'\n';
    }
    
    return 0;
}

