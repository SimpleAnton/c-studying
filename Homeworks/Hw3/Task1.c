#include <stdio.h>
#include <stdlib.h>

int main() {

    int l=0;
    printf("Please enter the length of matrix: ");
    scanf("%d",&l);

    int h=0;
    printf("Please enter the height of matrix: ");
    scanf("%d",&h);

    int **arr = (int**)malloc(sizeof(int *)*h);

    for (int i = 0; i < h; i++) {
        arr[i] = (int*)malloc(sizeof(int)*l);
        for (int j = 0; j < l; j++) {

            arr[i][j] = rand() % 100;
            printf(" %d", arr[i][j]);

        }
    printf("\n");
    }
    free(arr);
    return 0;

}