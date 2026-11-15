#include <iostream>
using namespace std;

void line(), message();

/* This function
 defines a text line*/

int main() {

    line();

    cout << "A message will be displayed soon" << endl;

    line();

    message();

    line();

    return 0;
}

void line() {

    cout << " -----------------------  " << endl;

}

// This function provides the message
void message() {

    cout << "    I am trying to do something in my life." << endl;

}
