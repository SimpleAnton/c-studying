#include<stdio.h>
#include<string.h>

int main () {

    char word[20];

    printf("Please enter a word: ");
    scanf("%s", word);

    int len = strlen(word);

    printf("The length of the word is: %d\n", strlen(word));

    int diffs=0;

    for (int i = 0; i < len/2; i++) {
        if (word[i] != word[len-i-1]) {
            diffs++;
        }
    }

    if (diffs==0) {
        printf("The word is a palindrome.\n");
    } else {
        printf("The word is not a palindrome.\n");
    }


    return 0;

}