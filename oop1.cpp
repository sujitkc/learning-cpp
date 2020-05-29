#include <iostream>

using namespace std;

class Name {
// private and public are called access specifier/modifiers
private:
  string firstName;
  string middleName;
  const string lastName; // declare a member variable as constant when 
    //you don't want its value to change afterwards.

public:

  Name() : lastName("Noname") {
    firstName = "Noname";
    middleName = "Noname";
  }

/*
  Name(string fn, string mn, string ln) {
    firstName = fn;
    middleName = mn;
    lastName = ln;
  }
*/

  // initialisation clause
  Name(string fn, string mn, string ln) : firstName(fn), middleName(mn), lastName(ln) {}

  string getFirstName() { return firstName; }
  string getMiddleName() { return middleName; }
  string getLastName() { return lastName; }

  void setFirstName(string fn) {
    // protective check before assigning value to your private member variable 
    if(fn == "") {
      cout << "Trying to set an empty first name." << endl;
      return;
    }
    else {
      firstName = fn;
    }
  }

  void setMiddleName(string mn) {
    middleName = mn;
  }
/*
  void setLastName(string ln) {
    lastName = ln;
  }
*/
};

int main() {
  cout << "Hello world!" << endl;

  Name n1("Sujit", "Kumar", "Chakrabarti"); 
//  n1.firstName = "Sujit";
//  n1.middleName = "Kumar";
//  n1.lastName = "Chakrabarti";

  Name n2("Ayan", "D.", "Kar");
//  n2.firstName = "Ayan";
//  n2.middleName = "D.";
//  n2.lastName = "Kar";

//  n2.middleName = "Deepak";
  Name n3;
  // n1 and n2 are objects or instances of class Name.
  // Each class is a type.

  cout << n1.getFirstName() << endl; 
  cout << n2.getLastName() << endl; 
  cout << n3.getFirstName() << endl;

  n3.setFirstName("Vishnu");
  cout << "First name = " << n3.getFirstName() << endl;

  n3.setFirstName("");
  cout << "First name = " << n3.getFirstName() << endl;
  return 0;
}
