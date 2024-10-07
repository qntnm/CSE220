#include <stdio.h>
#define NUM_SCORES 5
void set_scores(int j[],int n){
    
    for(int i=0; i<length-1; i++){
        j[i] = n;
    }
}
int main(){
    int scores[NUM_SCORES];
    set_scores(scores,100);
    int length = sizeOf(scores)/sizeOf(scores[0]);
    for(int i=0; i<length-1;i++){
        printf("Score" + scores[i]);
    }
    return 0;
};