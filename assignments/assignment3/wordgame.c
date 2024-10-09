#include <stdio.h>
#include <string.h>

// Function to check if a letter is in the word and reveal it in the guessedWord
void checkLetterInWord(char *word, char *guessedWord, char letter) {
    int length = strlen(word);
    for (int i = 0; i < length; i++) {
        if (word[i] == letter) {
            guessedWord[i] = letter;
        }
    }
}

// Function to display the current state of the guessed word
void displayGuessedWord(char *guessedWord) {
    printf("%s\n", guessedWord);
}

// Function to check if the word has been fully guessed
int isWordGuessed(char *word, char *guessedWord) {
    return strcmp(word, guessedWord) == 0;
}

// Function to reset guessedWord to all underscores
void resetGuessedWord(char *guessedWord, int length) {
    for (int i = 0; i < length; i++) {
        guessedWord[i] = '_';
    }
    guessedWord[length] = '\0';  // Null-terminate the string
}

// Function to handle a full word guess from the user
int handleWordGuess(char *word, char *input) {
    if (strcmp(word, input) == 0) {
        printf("You got it! %s\n", word);
        return 1; // Word guessed correctly
    } else {
        return 0; // Incorrect full word guess
    }
}

// Function to handle a letter guess
void handleLetterGuess(char *word, char *guessedWord, char letter) {
    checkLetterInWord(word, guessedWord, letter);
}

// Function to start a new game round
void startNewGame(char *word, char *guessedWord, int wordLength) {
    resetGuessedWord(guessedWord, wordLength);
    printf("The word to guess has %d letters:\n", wordLength);
    displayGuessedWord(guessedWord);
}

// Function to prompt the user for their guess (letter or word)
void promptUserGuess(char *input) {
    printf("Guess a letter or guess the complete word: ");
    scanf("%s", input);
}

// Main game loop function
void gameLoop(char *word, int wordLength) {
    char guessedWord[wordLength + 1];  // Array to store the guessed letters
    char input[100];  // Buffer to store user's guess (letter or word)

    startNewGame(word, guessedWord, wordLength);

    while (1) {
        promptUserGuess(input);

        // Check if the user wants to quit
        if (strcmp(input, "q") == 0) {
            printf("Bye Bye!\n");
            break;
        }

        // Handle full word or single letter guess
        if (strlen(input) == 1) {
            handleLetterGuess(word, guessedWord, input[0]);
        } else {
            if (handleWordGuess(word, input)) {
                // Word guessed correctly, give the option to quit or restart
                char choice;
                printf("Press 'q' to quit or any other key to continue: ");
                scanf(" %c", &choice);
                if (choice == 'q') {
                    printf("Bye Bye!\n");
                    break;
                } else {
                    // Restart the game with the same word
                    startNewGame(word, guessedWord, wordLength);
                    continue;
                }
            } else {
                //printf("%s\n", guessedWord);  // Incorrect word guess, show the current guessed state
            }
        }

        // Check if the entire word has been guessed
        if (isWordGuessed(word, guessedWord)) {
            printf("You got it! %s\n", word);
            // Prompt to continue or quit after the correct guess
            char choice;
            printf("Press 'q' to quit or any other key to continue: ");
            scanf(" %c", &choice);
            if (choice == 'q') {
                printf("Bye Bye!\n");
                break;
            } else {
                // Restart the game with the same word
                startNewGame(word, guessedWord, wordLength);
            }
        }

        displayGuessedWord(guessedWord);
    }
}

// Main function to handle program execution
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("one word please\n");
        return 1;
    }

    char *word = argv[1];
    int wordLength = strlen(word);

    printf("Welcome! Press 'q' to quit or any other key to continue:\n");
    char choice;
    scanf(" %c", &choice);
    if (choice == 'q') {
        printf("Bye Bye!\n");
        return 0;
    }

    
    gameLoop(word, wordLength);

    return 0;
}
