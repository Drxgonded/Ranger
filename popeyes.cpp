#include<iostream>
using namespace std;


//Function that makes the user select options 1-4 and asks them again if they dont
int askUserForNumber(int choice) {
int userChoice;
string option = "Choose an option (1-4): ";
do { cout << option << endl;
    cin >> userChoice; cout << "Invalid choice. Please select another";
} while (userChoice != choice);


}


int main() {

int choice = (1 <= 4);
int userChoice = askUserForNumber(choice);

  cout << "*Select The Item You Want*" << endl; 
  cout << "1. Fried Chicken" << endl; 
  cout << "2. Kool-Aid" << endl;
  cout << "3. Cotton" << endl;
  cout << "4. Mac n Cheese" << endl;


  cout << "Choose an option (1-4): " << endl;
  cin >> userChoice;
askUserForNumber(choice);

    switch (userChoice) {

     case 1:
         cout << "Do you want to buy Fried Chicken? " << endl;
         break;
     case 2:
         cout << "Do you want to buy Kool-Aid? " << endl;
         break;
     case 3:
         cout << "Do you want to buy Cotton? " << endl;
         break;
     case 4: 
         cout << "Do you want to buy Mac n Cheese? " << endl;
         break;
     default: 
         cout << "Please choose a number from 1 to 4." << endl;
         break;
     }


    return 0;
}
