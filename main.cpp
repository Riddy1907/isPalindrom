#include <iostream>

bool isPalindrom (std::string inputToCheck) {

    std::string inputReversed;
    inputReversed.resize(inputToCheck.size()); //bring size of empty string to same size as input

    //copy input and reverse it and then check if the reversed input matches the original input
    std::reverse_copy(inputToCheck.begin(), inputToCheck.end(), inputReversed.begin());

    if (inputReversed == inputToCheck) {return true;}
    else return false;
}

int main() {

    std::cout << "Enter your word: " << std::endl;

    std::string input;
    std::cin >> input;

    if(isPalindrom(input) == true)
        std::cout << input << " is a palindrom!" << std::endl;
    else std::cout << input << " is NOT a palindrom!" << std::endl;

    return 0;
}
