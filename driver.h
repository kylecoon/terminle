//
//  driver.h
//  wordle
//
//  Created by Kyle Coon on 2/10/22.
//

#ifndef driver_h
#define driver_h

#include <stdio.h>
#include "termcolor.hpp"
using namespace std;

class Driver {
public:
    void set_flags() {
        
        int menu = -1;
        
        while (menu != 1 && menu != 2) {
            menu = mainMenu();
        }
        
        mode = menu;
    }
    
    int mainMenu() {
        int choice = -1;
        cout << "Select an option:\n";
        cout << "1: Play with random word\n";
        cout << "2: Play with custom word\n";
        cout << "3: Read rules\n";
        cout << "4: Quit\n";
        
        while (choice > 4 || choice < 1) {
            choice = optionSelect();
        }
        
        if (choice == 3) {
            printRules();
        }
        
        else if (choice == 4) {
            cout << "Thanks for playing!\n";
            exit(0);
        }
        
        return choice;
        
    }
    
    int optionSelect() {
        string option;
        cout << "Option: ";
        cin >> option;
        if (option == "cheese") {
            cout << "CHEESE MODE ACTIVATED!!!\n\n";
            cout << "      " << termcolor::on_bright_yellow << termcolor::blink << termcolor::bold;
            cout << "_--\"-." << termcolor::reset << endl;
            
            cout << "   " << termcolor::on_bright_yellow << termcolor::blink << termcolor::bold;
            cout << ".-\"      \"-." << termcolor::reset << endl;
            
            cout << "  " << termcolor::on_bright_yellow << termcolor::blink << termcolor::bold;
            cout << "|\"\"--..      '-." << termcolor::reset << endl;
            
            cout << "  " << termcolor::on_bright_yellow << termcolor::blink << termcolor::bold;
            cout << "|      \"\"--..   '-." << termcolor::reset << endl;
            
            cout << "  " << termcolor::on_bright_yellow << termcolor::blink << termcolor::bold;
            cout << "|.-. .-\".    \"\"--..\"." << termcolor::reset << endl;
            
            cout << "  " << termcolor::on_bright_yellow << termcolor::blink << termcolor::bold;
            cout << "|'./  -_'  .-.      |" << termcolor::reset << endl;
            
            cout << "  " << termcolor::on_bright_yellow << termcolor::blink << termcolor::bold;
            cout << "|      .-. '.-'   .-'" << termcolor::reset << endl;
            
            cout << "  " << termcolor::on_bright_yellow << termcolor::blink << termcolor::bold;
            cout << "'--..  '.'    .-  -." << termcolor::reset << endl;
            
            cout << "       " << termcolor::on_bright_yellow << termcolor::blink << termcolor::bold;
            cout << "\"\"--..   '_'   :" << termcolor::reset << endl;
            
            cout << "             " << termcolor::on_bright_yellow << termcolor::blink << termcolor::bold;
            cout << "\"\"--..   |" << termcolor::reset << endl;
            
            cout << "                   " << termcolor::on_bright_yellow << termcolor::blink << termcolor::bold;
            cout << "\"\"-'" << termcolor::reset << endl << endl;
            
            cout << "man oh man does that cheese look tasty!\n\n";
            return -1;
        }
        else if (option.size() != 1) {
            cout << "Invalid option\n\n";
            return -1;
        }
        else if (option < "1" || option > "4") {
            cout << "Invalid option\n\n";
            return -1;
        }
        else {
            return (int)option[0] - 48;
        }
    }
    
    void printRules() {
        cout << "\n--------------------------------------------\n";
        
        cout << "Rules:\n";
        cout << "- You have 6 tries to guess the Wordle\n";
        cout << "- Each guess must be a valid 5 letter word\n";
        cout << "- After each guess, the color off the letters will show how close your guess is\n";
        cout << "  • Green means the letter is in the right spot\n";
        cout << "  • Yellow means the letter is in the word, but in a different spot\n";
        cout << "  • Grey means the letter is not in the word\n\n";
        
        cout << "Examples:\n";
        cout << termcolor::on_green << "W";
        cout << termcolor::on_white << "EARY\n";
        cout << termcolor::reset << "The letter \"W\" is in the correct spot                                                  " << endl;
        
        cout << termcolor::reset << termcolor::on_white << "P";
        cout << termcolor::on_bright_yellow << "O";
        cout << termcolor::on_white << "LES\n" << termcolor::reset;
        cout << "The letter \"O\" is in a different spot                                                  \n";
        
        cout << "" << termcolor::on_white << "WRONG\n" << termcolor::reset;
        cout << "none of these letters are in the word                                                  \n";
        
        cout << termcolor::blink << "Good luck!\n" << termcolor::reset;
        cout << "\n--------------------------------------------\n";
    }
    
    int getMode() {
        return mode;
    }
    
private:
    int mode;
};



#endif /* driver_h */
