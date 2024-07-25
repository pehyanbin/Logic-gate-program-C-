#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  while(true) {
    cout << "Assign the boolean values for your variables here. \n\nType 1 for True and 0 for False.\n\n\n";

    int a, b;
    bool a_bool, b_bool; 

    cout << "A : ";
    cin >> a;
    if (a == 1) {
      a_bool = true; 
    }
    else if (a == 0) {
      a_bool = false; 
    }
    else {
      cout << "Invalid number. Please try again.\n\n" << "\n"; 
      continue;
    }

    cout << "B : ";
    cin >> b;
    if (b == 1) {
      b_bool = true; 
    }
    else if (b == 0) {
      b_bool = false; 
    }
    else {
      cout << "Invalid number. Please try again.\n\n" << "\n";
      continue;
    }

    int operation;
    cout << "Select your operation : \n\n1. AND\n2. OR\n3. NOT\n4. XOR" << "\n";
    cin >> operation;

    cout << "Output : ";
    string output; 
    bool raw, a_raw, b_raw;
    string a_output, b_output; 

    switch(operation) {
      case 1:
        raw = a_bool && b_bool;
        if (raw == 1) {
          output = "True";
        }
        else {
          output = "False"; 
        }
        cout << output << "\n";
        break;
      case 2:
        raw = a_bool||b_bool;
        if (raw == 1) {
          output = "True";
        }
        else {
          output = "False";
        }
        cout << output << "\n";
        break;
      case 3:
        a_raw = !a_bool;
        b_raw = !b_bool;
        if (a_raw == 1) {
          a_output = "True";
        }
        else {
          a_output = "False";
        }

        if (b_raw == 1) {
          b_output = "True";
        }
        else {
          b_output = "False";
        }
        
        cout << "\nNot A : " << a_output << "\n";
        cout << "Not B : " << b_output << "\n";
        break; 
      case 4:
        raw = a_bool^b_bool;
        if (raw == 1) {
          output = "True";
        }
        else {
          output = "False";
        }
        cout << output << "\n";
        break; 
      default:
        cout << "Invalid number. Please try again.\n\n" << "\n";
        continue; 
    }

    cout << "Do you want to continue? (Any key to continue and 0 to exit the program.)" << "\n";
    int choice;
    cin >> choice; 

    if (choice == 0) {
      break; 
    }
    else {
      cout << "\n\n======================================================\n"; 
    }
  }

  return 0;
}