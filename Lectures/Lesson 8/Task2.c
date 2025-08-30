#include<stdio.h>

int find_max(int arr[]) {

    int max = 0;

    for (int i = 0; i < 5; i++) {

        max = (arr[i] > max) ? arr[i] : max;

    }

    return max;
}

int main() {

    int arr[] = {0,0,0,0,0};

    printf("Enter 5 numbers: \n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ",i+1);
        scanf(" %d", &arr[i]);
    }

    printf("Entered array is: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ",arr[i]);
    }

    int max = find_max(arr);
    printf("\n Max number is: %d \n", max);

}