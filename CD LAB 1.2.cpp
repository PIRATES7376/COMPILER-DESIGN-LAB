#include <iostream>
#include <string>

using namespace std;

bool isOperator(char c)
{

return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}

int main() {
string userInput;

cout << "Enter an expression: ";
getline(cin, userInput);

cout << "Arithmetic Operators in the expression: ";
for (char c : userInput) {
if (isOperator(c)) {
cout << c << " ";
}
}

cout << endl;

return 0;
}
