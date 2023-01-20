#include <iostream>
using namespace std;

int main() {
  try {
    string age ;
    getline(cin,age);
    if (age >= "a"||age>="z"||age>="A"||age>="Z" ) {
      cout << "Access granted - your name is Verified."<<endl;
      cout<<age<<endl;  
    } else {
      throw 404;
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must Add Alphabets.\n";
    cout << "Error number: " << myNum<<endl;  
  }
  
  
  return 0;
}

