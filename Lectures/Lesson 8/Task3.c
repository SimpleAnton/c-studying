#include<stdio.h>

int size_of_int_arr(int arr[]) {
    return sizeof(arr) / sizeof(arr[0]);
}

int main() {

    int inp;
    printf("Enter a length of the array: ");
    scanf("%d",&inp);

    int arr[inp];
    int arr_size = size_of_int_arr(arr);

    printf("Now enter numbers: \n");
    for (int i = 0; i < inp; i++) {
        printf("Number %d: ",i+1);
        scanf(" %d", &arr[i]);
    }

    printf("Entered array is: ");
    for (int i = 0; i < inp; i++) {
        printf("%d ",arr[i]);
    }

    int arr2[inp];
    for (int i = 0; i < inp; i++) {

        arr2[i] = arr[arr_size-1-i];

    }

    printf("\n And reversed array is: ");
    for (int i = 0; i < inp; i++) {
        printf("%d ",arr2[i]);
    }
    printf("\n");

    return 0;
}