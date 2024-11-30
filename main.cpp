#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() { 
    
    srand(time(0));

    char playAgain;

    do {
        int secretNumber = rand() % 100 + 1;
        int guess;
        int attempts = 0;

        cout << "Welcome to the Number Guessing Game!" << endl;
        cout << "I have selected a number between 1 and 100." << endl;
        cout << "Try to guess it!" << endl;
        
        do {
            cout << "Guess a number between 1 and 100: ";
            cin >> guess;
            attempts++;

            if (guess == secretNumber) {
                cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
            } else if (guess < secretNumber) {
                cout << "Too low. Try again.\n";
            } else {
                cout << "Too high. Try again.\n";
            }
        } while (guess != secretNumber);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing!\n";

    return 0;
}