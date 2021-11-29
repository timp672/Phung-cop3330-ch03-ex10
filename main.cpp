/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tim Phung
 */
#include "std_lib_facilities.h"

using namespace std;

int main()
{
    string operation;
    double val1, val2;
    cout << "Enter your operation and two values separated by a space: ";

    while(cin>>operation>>val1>>val2)
    {

        double result;
        if (operation == "+" || operation=="plus") result = val1+val2;
        else if (operation=="-" || operation=="minus") result = val1-val2;
        else if (operation=="*" || operation=="mul") result = val1*val2;
        else if (operation=="/" || operation=="div")
        {
            if (val2 == 0)
            {
                cout << "Cannot divide by 0" << endl;
                return 0;
            }
            else
                result = val1/val2;
        }
        cout << result << endl;
        cout << "Enter your operation and two values separated by a space: ";
    }
    return 0;
}
