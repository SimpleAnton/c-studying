#include<stdio.h>

int main () {
    int min;
    int max;
    int temp;

    printf("Enter a number: ");
    scanf("%d",&min);

    printf("Enter another number: ");
    scanf("%d",&temp);

    if (temp>min) {
        max = temp;
    } else {
        max = min;
        min = temp;
    }

    for (int i = min; i<=max; i++) {
        printf("%d ",i);
    }


}