#include<stdio.h>

#define AMT 7

int main () {

    int inp;

    printf("Enter a number: ");
    scanf("%d", &inp);

    for (int i = 0; i <= AMT; i++) {

        printf("%d ", inp+i);

    }

}