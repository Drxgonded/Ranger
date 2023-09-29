#include<iostream>
using namespace std;

int main()
{
  int choice;

  cout << "*Select The Item You Want*" << endl; 
  cout << "1. Fried Chicken" << endl; 
  cout << "2. Kool-Aid" << endl;
  cout << "3. Cotton" << endl;
  cout << "4. Mac n Cheese" << endl;

    return 0;
}







#include <iostream>

int main() {
    int choice;

    std::cout << "Choose an option (1-3): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "You chose option 1." << std::endl;
            break;
        case 2:
            std::cout << "You chose option 2." << std::endl;
            break;
        case 3:
            std::cout << "You chose option 3." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please choose between 1 and 3." << std::endl;
            break;
    }

    return 0;
}












#include <iostream>

int main() {
    int choice;

    std::cout << "Choose an option (1-3): ";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "You chose option 1." << std::endl;
    } else if (choice == 2) {
        std::cout << "You chose option 2." << std::endl;
    } else if (choice == 3) {
        std::cout << "You chose option 3." << std::endl;
    } else {
        std::cout << "Invalid choice. Please choose between 1 and 3." << std::endl;
    }

    return 0;
}















#include <iostream>

// Function declaration
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 3;

    // Function call
    int sum = add(num1, num2);

    std::cout << "Sum: " << sum << std::endl;

    return 0;
}











#include <iostream>

// Function declaration with default parameter
int multiply(int a, int b = 2) {
    return a * b;
}

int main() {
    int num1 = 5;

    // Function call with one argument
    int result1 = multiply(num1);

    // Function call with two arguments
    int result2 = multiply(num1, 3);

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;

    return 0;
}








#include <iostream>

// Recursive function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num = 5;
    unsigned long long fact = factorial(num);

    std::cout << "Factorial of " << num << " is " << fact << std::endl;

    return 0;
}



















#include <iostream>

// Function overloading
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 3;
    double num3 = 2.5, num4 = 4.2;

    int sum_int = add(num1, num2);
    double sum_double = add(num3, num4);

    std::cout << "Sum (int): " << sum_int << std::endl;
    std::cout << "Sum (double): " << sum_double << std::endl;

    return 0;
}



