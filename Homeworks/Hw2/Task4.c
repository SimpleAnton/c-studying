#include <ctype.h>
#include<stdio.h>

int solver (int w, int h, char c) {

    for (int i=0;i<h;i++) {

        for (int j=0;j<w;j++) {

            printf("%c ",c);

        }
        printf("\n");
    }

    return 0;
}

int main () {

    int w;
    int h;
    char c;


    printf("Enter a width: ");
    scanf("%d",&w);

    printf("Enter a height: ");
    scanf("%d",&h);

    printf("Enter a character: ");
    scanf(" %c",&c);

    int temp = solver (w, h, c);

    return 0;
}