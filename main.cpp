#include <iostream>
#include <random>
#include <string>
#include <vector>
using namespace std;

int main() {

    vector<string> guess = {
        "Rock",
        "Paper",
        "Scissors",
    };

    while (true) {
        
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<size_t> dist(0, guess.size() - 1);

        size_t randomIndex = dist(gen);
        string randomChoice = guess[randomIndex];

        string choice;

        cout << "Choices: Rock, Paper, Scissor" << endl;
        cout << "Type the WORD of your choice (not a number) : ";
        cin >> choice;


        if (choice == randomChoice) {
            cout << "It's a Tie!";
        }
        else if ((choice == "Rock" && randomChoice == "Scissor") || (choice == "Paper" && randomChoice == "Rock") || (choice == "Scissor" && randomChoice == "Paper")) {
            cout << "You win!";
        }
        else {
            cout << "You lose!";
        }
    }
}
