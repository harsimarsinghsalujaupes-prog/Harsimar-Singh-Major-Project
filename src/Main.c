#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice;
    int computerChoice;
    char playAgain;

    int userScore = 0;
    int compScore = 0;
    int draws = 0;

    srand(time(0));

    do {
        printf("\n--- Lady Hunter Tiger Game ---\n");
        printf("Choose one:\n");
        printf("1. Lady\n");
        printf("2. Hunter\n");
        printf("3. Tiger\n");
        printf("Enter your choice (1-3): ");
        scanf("%d", &userChoice);

        if (userChoice < 1 || userChoice > 3) {
            printf("Invalid choice. Please enter 1, 2 or 3.\n");
            continue;
        }

        computerChoice = (rand() % 3) + 1;

        printf("You chose: ");
        if (userChoice == 1) printf("Lady\n");
        else if (userChoice == 2) printf("Hunter\n");
        else printf("Tiger\n");

        printf("Computer chose: ");
        if (computerChoice == 1) printf("Lady\n");
        else if (computerChoice == 2) printf("Hunter\n");
        else printf("Tiger\n");

        if (userChoice == computerChoice) {
            printf("Story: Both chose the same. It's a draw!\n");
            draws++;
        }
        else if (userChoice == 2 && computerChoice == 3) {
            printf("Story: Hunter kills Tiger!\n");
            printf("Result: You win!\n");
            userScore++;
        }
        else if (userChoice == 3 && computerChoice == 1) {
            printf("Story: Tiger eats Lady!\n");
            printf("Result: You win!\n");
            userScore++;
        }
        else if (userChoice == 1 && computerChoice == 2) {
            printf("Story: Lady tricks Hunter!\n");
            printf("Result: You win!\n");
            userScore++;
        }
        else if (computerChoice == 2 && userChoice == 3) {
            printf("Story: Hunter kills Tiger!\n");
            printf("Result: Computer wins!\n");
            compScore++;
        }
        else if (computerChoice == 3 && userChoice == 1) {
            printf("Story: Tiger eats Lady!\n");
            printf("Result: Computer wins!\n");
            compScore++;
        }
        else if (computerChoice == 1 && userChoice == 2) {
            printf("Story: Lady tricks Hunter!\n");
            printf("Result: Computer wins!\n");
            compScore++;
        }

        printf("\n--- Scoreboard ---\n");
        printf("You: %d\n", userScore);
        printf("Computer: %d\n", compScore);
        printf("Draws: %d\n", draws);

        printf("\nDo you want to play again? (Y/N): ");
        scanf(" %c", &playAgain);

    } while (playAgain == 'Y' || playAgain == 'y');

    printf("\n=== FINAL SCORE ===\n");
    printf("You: %d\n", userScore);
    printf("Computer: %d\n", compScore);
    printf("Draws: %d\n", draws);

    if (userScore > compScore)
        printf("Overall Winner: YOU! 🎉\n");
    else if (compScore > userScore)
        printf("Overall Winner: COMPUTER! 🤖\n");
    else
        printf("Overall Result: It's a TIE! 😄\n");

    printf("\nThanks for playing!\n");

    return 0;
}
