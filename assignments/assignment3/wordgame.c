#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
// prints init string then & handles quit or continue
void playGame(char *word);
// checks if the guess is correct. (0 is false 1 is true)
int checkGuess(char guess);
// returns letter placment e.g. _e__e_ when the word is letter and the guess was e. 
//If the guess not in the word, just prints letter length in underscores
char guessPlacment(char guess, char* word,char* placementWord[]);



// Calls play game
// first argument value is always file path
int main(int numArguments, char* argumentValue[]){
    char quit = 0;
    int gameEnded = 0;
   
    
    // Check if game has ended
    while(!gameEnded){
        // check if they want to quit
        scanf("%c",&quit);
        if(quit == 'q'){
            gameEnded = 1;
            break;
        }else{
            playGame();

        }
            

        
    }
    
}
void playGame(char* word){
    
    
    

}
char 

char guessPlacment(char guess,char* word,char* placementWord[]){
    char *guessptr = &guess;
    int guessLength = strlen(guessptr);
    int wordLength = strlen(word);
    char underscorePlace[wordLength];
    //char wordArr[] = *word;
    // if the guess is a word or letter
    if(guessLength > 1){
        // check if the word is equal to the word guess.
        if(guess == *word){
            return guess;
        }else{
            return 0;
        }
        // guess is a letter
    }else{
     for(int i=0; i<wordLength; i++){
        if(guess == word[i]){
        *placementWord[i] = guess;
        }else{
            *placementWord[i] = '_';
        }
     }
    
    }

}



    

