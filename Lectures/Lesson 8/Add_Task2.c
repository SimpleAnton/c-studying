#include<stdio.h>

int get_sum(int arr[]) {

    int sum;

    for (int i = 0; i < 10; i++) {
       sum = sum + arr[i];
    }

    return sum;
}

int main () {
    int arr[10];

    printf("Please, enter 10 numbers below. \n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ",i+1);
        scanf(" %d", &arr[i]);
    }
    printf("Entered array is: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n The summary of all numbers is: %d", get_sum(arr));

    return 0;
}