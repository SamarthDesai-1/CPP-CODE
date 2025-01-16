#include <iostream>

using namespace std;

class Greet {

  public:
    void greet() {
      
      cout << "Hello, Good Morning!" << endl;
    }
};

int main() {
  
  cout << "This is my first program in C++" << endl;

  Greet obj;
  obj.greet();

  return 0;
}