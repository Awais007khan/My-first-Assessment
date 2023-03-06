//20. Write C++ program to change string to lower case without strlwr
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str = "HELLO WORLD";
    cout << "Original string: " << str << endl;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }

    cout << "Lowercase string: " << str << endl;

    return 0;
}

