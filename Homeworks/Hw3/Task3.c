#include <stdio.h>
#include <stdlib.h>

int main() {
    int l=10;
    int h=10;

    int **arr = (int**)malloc(sizeof(int *)*h);

    for (int i = 0; i < h; i++) {
        arr[i] = (int*)malloc(sizeof(int)*l);
        for (int j = 0; j < l; j++) {

            arr[i][j] = rand() % 100;
            printf(" %d", arr[i][j]);

        }
        printf("\n");
    }

    int max=0;
    int cords[] = {0,0};

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {

            if (arr[i][j] > max) {
                max = arr[i][j];
                cords[0] = i;
                cords[1] = j;
            }
        }
    }
    printf("The highest number in the matrix is %d, which is located here: %d, %d", max, cords[1]+1, cords[0]+1);

    free(arr);
    return 0;

}