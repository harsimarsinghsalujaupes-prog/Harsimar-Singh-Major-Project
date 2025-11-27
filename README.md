PROJECT DESCRIPTION

The goal of this project is to create an interactive C-language program that mimics the well-known game Lady-Hunter-Tiger. This game is well-known for its straightforward rules and fast decision-making, and it resembles Rock, Paper, Scissors. This project's goal is to create a command-line game in which a player takes on the computer. After accepting the user's selection (Lady, Hunter, or Tiger), the program makes a random selection for the computer, compares the outcomes using predetermined criteria, decides who wins the round, updates the scoreboard, and lets the user continue or stop playing.

To guarantee portability, clarity, and accurate random number generation, the project is implemented using common C libraries like <stdio.h>, <stdlib.h>, and <time.h>. Utilizing a modular
Standard C libraries like <stdio.h>, <stdlib.h>, and <time.h> are used in the project's implementation to guarantee portability, clarity, and accurate random number generation. By dividing the logic into several.c and.h files, the program employs a modular approach that enhances readability and maintainability. Three fundamental game rules serve as the foundation for the decision logic:

Hunter is tricked by a lady

Tiger is killed by Hunter

Lady is eaten by a tiger

Following each round, the scoreboard is updated to show the total number of wins, losses, and draws. Until the user chooses to end the game, a loop structure permits repeated gameplay.

Functions, conditional statements, modular programming, input validation, loops, and randomization are some of the fundamental programming concepts that are demonstrated in this project. It also shows how C can be used to implement logical decision-making that is used in real games. This project is appropriate for students learning basic programming concepts and structured program design because of its simplicity, clarity, and interactivity.

 INTRODUCTION

Games provide an excellent way to learn programming because they combine logic, conditions, user interaction, and controlled randomness. The Lady–Hunter–Tiger game is a simple decision-based game where the outcome depends on comparing the user’s choice with the computer’s randomly generated choice. This makes it ideal for demonstrating how conditional statements, user-defined functions, and modular programming work in the C language.

This project focuses on building a complete interactive game using C, where the program repeatedly asks the user to select one of the three options—Lady, Hunter, or Tiger. After receiving the input, the program generates the computer’s choice using a random number generator. It then evaluates both choices using the game's rules to determine whether the user wins, the computer wins, or the round ends in a draw. A scoreboard is maintained across rounds to show the overall performance throughout the gameplay session.

Through this project, students gain experience with several core programming techniques including modular code design (separating logic into .c and .h files), input handling, menu-driven programming, and loop control using the do–while structure. Additionally, the project highlights the use of randomization with rand() and srand(time(0)) to simulate unpredictable computer decisions, which is an important concept in many computer-based simulations.

Implementing this project helps learners strengthen their understanding of structured C programming and logical problem solving. It also demonstrates how simple real-world games can be translated into efficient and interactive programs while emphasizing good coding practices, clarity, and user-friendly output formatting.
