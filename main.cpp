//
//  main.cpp
//  wordle
//
//  Created by Kyle Coon on 2/10/22.
//

#include <iostream>
#include "driver.h"
#include "wordle.h"
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    ++argc;
    --argc;
    argv[1] -= 1;
    
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n";
    cout << "      Welcome to Wordle!\n";
    cout << "        by: Kyle Coon\n\n";
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n\n";
    
    int i = 1;
    while (i > 0) {
    Driver d;
    d.set_flags();
    
    Wordle w;
    w.set_mode(d.getMode());
    w.play();
    }

    
    return 0;
}
