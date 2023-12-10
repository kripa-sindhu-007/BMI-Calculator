#include <iostream>

void calculateBMI() {
    system("cls");

    double weight, height;

    std::cout << "\n\n";
    std::cout << "Enter your weight (in kilograms): ";
    std::cin >> weight;

    std::cout << "Enter your height (in meters): ";
    std::cin >> height;

    double bmi = weight / (height * height);

    std::cout << "\n\n";
    std::cout << "----------------------------------" << std::endl;
    std::cout << "Your Body Mass Index is " << bmi << std::endl;
    std::cout << "----------------------------------" << std::endl;

    if (bmi < 18.5)
        std::cout << "You are Underweight";
    else if (bmi >= 18.5 && bmi <= 25)
        std::cout << "You are Perfectly Healthy";
    else if (bmi > 25)
        std::cout << "You are Overweight";

    std::cout << "\n\n----------------------------------";
    std::cout << "\n\nPress any key to go back to Menu... ";
    std::cin.ignore(); // Clear the input buffer
    std::cin.get();
}

void instructions() {
    system("cls");
    std::cout << "Instructions";
    std::cout << "\n----------------";
    std::cout << "\n BMI is less than 18.5 : You are Underweight";
    std::cout << "\n BMI is between 18.5 and 25 (inclusive) : You are Perfectly Healthy";
    std::cout << "\n BMI is greater than 25 : You are Overweight";
    std::cout << "\n\nPress any key to go back to menu";
    std::cin.ignore();
    std::cin.get();
}

int main() {
    do {
        system("cls");
        std::cout << " ------------------------------------ " << std::endl;
        std::cout << " |          BMI Calculator          | " << std::endl;
        std::cout << " ------------------------------------" << std::endl
                  << std::endl;
        std::cout << "1. Calculate BMI" << std::endl;
        std::cout << "2. BMI Rules" << std::endl;
        std::cout << "3. Quit" << std::endl
                  << std::endl;
        std::cout << "Select option: ";
        char op;
        std::cin >> op;

        switch (op) {
            case '1':
                calculateBMI();
                break;
            case '2':
                instructions();
                break;
            case '3':
                exit(0);
                break;
            default:
                std::cout << "Invalid option. Please try again." << std::endl;
        }

    } while (true);

    return 0;
}
