#include <stdio.h>
#include <stdlib.h>

// int arrCreator (int l, int h) {
//
//     int **arr = (int**)malloc(sizeof(int *)*h);
//
//     for (int i = 0; i < h; i++) {
//         arr[i] = (int*)malloc(sizeof(int)*l);
//         for (int j = 0; j < l; j++) {
//
//             arr[i][j] = rand() % 100;
//
//         }
//         printf("\n");
//     }
//
//     return **arr;
// }

int main() {

    int l=10;
    int h=10;

    int **arr1 = (int**)malloc(sizeof(int *)*h);

    for (int i = 0; i < h; i++) {
        arr1[i] = (int*)malloc(sizeof(int)*l);
        for (int j = 0; j < l; j++) {

            arr1[i][j] = rand() % 100;
            printf(" %d", arr1[i][j]);

        }
        printf("\n");
    }
    printf("\n");

    int **arr2 = (int**)malloc(sizeof(int *)*h);

    for (int i = 0; i < h; i++) {
        arr2[i] = (int*)malloc(sizeof(int)*l);
        for (int j = 0; j < l; j++) {

            arr2[i][j] = rand() % 100;
            printf(" %d", arr2[i][j]);

        }
        printf("\n");
    }
    printf("\n");

    int **arrSum = (int**)malloc(sizeof(int *)*h);

    for (int i = 0; i < h; i++) {
        arrSum[i] = (int*)malloc(sizeof(int)*l);
        for (int j = 0; j < l; j++) {

            arrSum[i][j] = arr1[i][j] + arr2[i][j];
            printf(" %d", arrSum[i][j]);

        }
        printf("\n");
    }
        printf("\n");

    free(arr1);
    free(arr2);
    free(arrSum);

    return 0;

}