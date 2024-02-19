#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

void reverse(char *word){

	static int i,len,temp;

	len = strlen(word);
	
	if (i < len/2) {
		temp = word[i];
        word[i] = word[len - i - 1];
		word[len-i-1] = temp;
		i++;
		reverse(word);
	}

}

void lowerString(char *word){
    
    int len = strlen(word);

    for (int i=0; i < len; i++){
    
       word[i] = (char)tolower((unsigned char)word[i]); 

    }

}

bool compareArrays(char *word1, char *word2){

    int len = strlen(word1);

    for (int i = 0; i < len; i++){

        if (word1[i] == word2[i]){
            continue;
        }
        else {
            return false;
        }

    }
    return true;

}

int main(){
	

    while(1){

        char checkPalindrome[30];

        printf("Enter word to check palindrome: ");
        
        scanf("%s", checkPalindrome);
       

        char reversedWord[30]; strcpy(reversedWord, checkPalindrome);
        reverse(reversedWord);

        
        if (compareArrays(reversedWord, checkPalindrome) == true){
            printf("\nYes they are a palindrome\n");
        } else {
            printf("\nNo they not\n");
        }
    }    
    return 0;
}
