#include <bits/stdc++.h>

using namespace std;

int main() {

    // here we will generate random numbers
    srand(time(0));

    int playerChoice;
    int computerChoice;

    cout << "Welcome to Rock-Paper-Scissors game:" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> playerChoice;

    // Validate player's choice
    if (playerChoice < 1 || playerChoice > 3) {
        cout << "Invalid choice. Please enter a number between 1 and 3." << endl;
        return 0;
    }

    // Generate computer's choice
    computerChoice = rand() % 3 + 1;

    cout << "Computer chooses: " << computerChoice << endl;

    // winners 
    if (playerChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if ((playerChoice == 1 && computerChoice == 3) ||
               (playerChoice == 2 && computerChoice == 1) ||
               (playerChoice == 3 && computerChoice == 2)) {
        cout << "You win!. Good Game." << endl;
    } else {
        cout << "Computer wins!. Better luck next time." << endl;
    }


    return 0;
}