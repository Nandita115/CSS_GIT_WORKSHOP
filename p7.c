#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getComputerChoice();
void showChoice(int choice);
void determineWinner(int playerChoice, int computerChoice);

int main() {
    int playerChoice, computerChoice;

    // Seed random number generator
    srand(time(0));

    printf("Welcome to Stone-Paper-Scissors Game!\n");
    printf("Enter your choice:\n");
    printf("1. Stone\n");
    printf("2. Paper\n");
    printf("3. Scissors\n");

    printf("Your choice: ");
    scanf("%d", &playerChoice);

    if (playerChoice < 1 || playerChoice > 3) {
        printf("Invalid choice! Please choose between 1 and 3.\n");
        return 0;
    }

    computerChoice = getComputerChoice();

    printf("\nYou chose: ");
    showChoice(playerChoice);
    printf("Computer chose: ");
    showChoice(computerChoice);

    determineWinner(playerChoice, computerChoice);

    return 0;
}

// Function to generate random computer choice (1-3)
int getComputerChoice() {
    return (rand() % 3) + 1; // Generates 1 (Stone), 2 (Paper), or 3 (Scissors)
}

// Function to display choice names
void showChoice(int choice) {
    switch (choice) {
        case 1:
            printf("Stone 🪨\n");
            break;
        case 2:
            printf("Paper 📄\n");
            break;
        case 3:
            printf("Scissors ✂️\n");
            break;
        default:
            printf("Invalid Choice\n");
    }
}

// Function to determine the winner
void determineWinner(int playerChoice, int computerChoice) {
    if (playerChoice == computerChoice) {
        printf("It's a tie! 🤝\n");
    } else if (
        (playerChoice == 1 && computerChoice == 3) || // Stone beats Scissors
        (playerChoice == 2 && computerChoice == 1) || // Paper beats Stone
        (playerChoice == 3 && computerChoice == 2)    // Scissors beats Paper
    ) {
        printf("🎉 You win! 🎉\n");
    } else {
        printf("😢 Computer wins! Try again.\n");
    }
}
