#include<stdio.h>

int main () {

    int arr[] = {1,2,3,4,5};

    printf("%d \n", arr[3]);
    printf("Size of %lu \n", sizeof(arr));
    printf("3rd is %lu \n", arr[2]);

    char string_arr[] = "Hello World!";

    printf("%s \n", string_arr);
    printf("%c \n", string_arr[2]);

    return 0;

}