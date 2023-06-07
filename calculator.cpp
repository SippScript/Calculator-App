#include <iostream>


int multiplication(double a, double b){
    // a standard function that defines our multiplicationl ogic
    return (a * b);
}

int division(double a, double b){
    // a standard function that defines our division logic
    return (a / b);
}

int subtraction(double a, double b){
    // a standard function that defines our subtraction logic
    return (a - b);
}

int addition(double a, double b){
    // a standard function that defines our addition logic
    return (a + b);
}

int mMultiplication(){
    std::cout << "First Number: "; // take the first number
    double firstNumber;
    std::cin >> firstNumber;

    std::cout << "Second Number: "; // take the second number
    double secondNumber;
    std::cin >> secondNumber;

    // perform math using the firstNumber and secondNumber variable
    double product = multiplication(firstNumber, secondNumber);
    std::cout << "The product is: " << product << std::endl;
    return 0;
}

int dDivision(){
    std::cout << "First Number: "; // take the first number
    double firstNumber;
    std::cin >> firstNumber;

    std::cout << "Second Number: "; // take the second number
    double secondNumber;
    std::cin >> secondNumber;

    // perform math using the firstNumber and secondNumber variable
    double quotient = division(firstNumber, secondNumber);
    std::cout << "The quotient is: " << quotient << std::endl;
    return 0;
}

int sSubtraction(){
    std::cout << "First Number: "; // take the first number
    double firstNumber;
    std::cin >> firstNumber;

    std::cout << "Second Number: "; // take the second number
    double secondNumber;
    std::cin >> secondNumber;

    // perform math using the firstNumber and secondNumber variable
    double difference = subtraction(firstNumber, secondNumber);
    std::cout << "The difference is: " << difference << std::endl;
    return 0;
}

int aAddition(){
    std::cout << "First Number: "; // take the first number
    double firstNumber;
    std::cin >> firstNumber;
        
    std::cout << "Second Number: "; // take the second number
    double secondNumber;
    std::cin >> secondNumber;

    // perform math using the firstNumber and secondNumber variable
    double sum = addition(firstNumber, secondNumber);
    std::cout << "The sum is: " << sum << std::endl;
    return 0;
}

void exitProgram(){
    exit;
}


// going to build the main menu for our calculator
// trying a simple design, maybe to inspire you all to come up with similar yet unique ideas
int mainMenu(){
    // this is the basic main menu format I use for most of my projects in a terminal
    std::cout << "Welcome to Hashbit's Simple Calculator!" << std::endl
    << "Please choose from one of the following options!" << std::endl
    << "1. Addition " << std::endl
    << "2. Subtraction " << std::endl
    << "3. Division " << std::endl
    << "4. Multiplication " << std::endl
    << "5. Exit Program" << std::endl
    << "> ";

    // to make things simple, I turn the users input (ie the number they type in) int a string
    std::string userInput;
    std::cin >> userInput;

    // try block allows us to handle exceptions in out code
    try{
        // then we can iterate over the users input to choose what they want to do
        if (userInput == "1"){
            aAddition();

            // ask if the user would like to return to the main menu or complete another addition task
            std::cout << "1. Permform addition again " << std::endl
            << "2. To main menu" << std::endl
            << "Any other key to quit program" << std::endl
            << "> ";

            std::string aUserInput;
            std::cin >> aUserInput;
            if(aUserInput == "1"){
                aAddition();
            } if (aUserInput == "2"){
                mainMenu();
            } else {
                std::cout << "Goodbye!";
            }
        }else if (userInput == "2"){
            sSubtraction();

            // ask if the user would like to return to the main menu or complete another subtraction task
            std::cout << "1. Permform subtraction again " << std::endl
            << "2. To main menu" << std::endl
            << "Any other key to quit program" << std::endl
            << "> ";

            std::string aUserInput;
            std::cin >> aUserInput;
            if(aUserInput == "1"){
                sSubtraction();
            } if (aUserInput == "2"){
                mainMenu();
            } else {
                std::cout << "Goodbye!";
            }
        }else if (userInput == "3"){
            dDivision();

            // ask if the user would like to return to the main menu or complete another division task
            std::cout << "1. Permform division again " << std::endl
            << "2. To main menu" << std::endl
            << "Any other key to quit program" << std::endl
            << "> ";

            std::string aUserInput;
            std::cin >> aUserInput;
            if(aUserInput == "1"){
                dDivision();
            } if (aUserInput == "2"){
                mainMenu();
            } else {
                std::cout << "Goodbye!";
            }
        }else if (userInput == "4"){
            mMultiplication();

            // ask if the user would like to return to the main menu or complete another division task
            std::cout << "1. Permform multiplication again " << std::endl
            << "2. To main menu" << std::endl
            << "Any other key to quit program" << std::endl
            << "> ";

            std::string aUserInput;
            std::cin >> aUserInput;
            if(aUserInput == "1"){
                mMultiplication();
            } if (aUserInput == "2"){
                mainMenu();
            } else {
                std::cout << "Goodbye!";
         }
        }else if(userInput == "5"){
            exitProgram();
        }else{
            std::cout << "Error: Please enter a valid input!" << std::endl;
            mainMenu();
        }
    }catch(const std::exception& e){
            std::cerr << e.what() << '\n';
        }
}


int main(){
    mainMenu();
    return 0;
}