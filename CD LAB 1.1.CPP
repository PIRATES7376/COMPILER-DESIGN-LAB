#include <iostream>

#include <string>


using namespace std;


bool isNumeric(const string &input) {

    bool isNumeric = true;


    for (char c : input) {



        if (c < '0' || c > '9') {

            isNumeric = false;

            break;

        }

    }


    return isNumeric;

}


int main() {

    string userInput;


    cout << "Enter a value: ";

    cin >> userInput;


    if (isNumeric(userInput)) {

        cout << "Numeric" << endl;

    } else {

        cout << "Non-numeric" << endl;

    }


    return 0;

}


