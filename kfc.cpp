#include <iostream>
#include <string>

// Define a structure to represent a fruit
struct Fruit {
    std::string name;
    double weight;  // in grams
    double price;   // per kilogram
};

// Define a class to manage fruit-related functions
class FruitFunctions {
public:
    // Constructor
    FruitFunctions() {
        // Initialize the array of function pointers with fruit-related functions
        functions[0] = &FruitFunctions::calculateTotalCost;
        functions[1] = &FruitFunctions::calculateCalories;
        functions[2] = &FruitFunctions::calculateVitaminC;
    }

    // Function to calculate the total cost of buying a given quantity of fruit
    static double calculateTotalCost(const Fruit& fruit, int quantity) {
        return (fruit.price / 1000) * fruit.weight * quantity;
    }

    // Function to calculate the calories in a given quantity of fruit
    static double calculateCalories(const Fruit& fruit, int quantity) {
        return (fruit.weight / 100) * 52 * quantity; // Assuming 52 calories per 100 grams
    }

    // Function to calculate the vitamin C content in a given quantity of fruit
    static double calculateVitaminC(const Fruit& fruit, int quantity) {
        return (fruit.weight / 100) * 50 * quantity; // Assuming 50 mg of vitamin C per 100 grams
    }

    // Function to execute a selected fruit-related function
    double executeFunction(int choice, const Fruit& fruit, int quantity) {
        if (choice >= 1 && choice <= 3) {
            // Call the selected function and return the result
            return (this->functions[choice - 1])(fruit, quantity);
        } else {
            // Invalid choice
            return -1.0;
        }
    }
    
private:
    // Array of function pointers
    double (FruitFunctions::functions[3])(const Fruit&, int);
};

int main() {
    // Define a fruit
    Fruit apple = {"Apple", 150, 2.0}; // 150g apple for $2.00 per kilogram

    // Create an instance of the FruitFunctions class
    FruitFunctions fruitFunc;
}