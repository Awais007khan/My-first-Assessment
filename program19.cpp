//19. Write C++ program to change string to upper case without strupr
#include <iostream>
#include <string>

using namespace std;

int main() {
  string str = "hello world";
  
  for (int i = 0; i < str.length(); i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = str[i] - 'a' + 'A';
    }
  }
  
  cout << str << endl;
  
  return 0;
}

