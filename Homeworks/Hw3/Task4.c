#include <stdio.h>
#include <stdlib.h>

const int l=5;
const int h=5;

int marker(int **arr, int **marked, int pos1, int pos2) {

    printf("Marker inintiated \n");

    marked[pos1][pos2] = 1;

    int times=0;
    do {
        times=0;
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < l; j++) {

                // if ( arr[i][j]==1&&marked[i][j]==0&&marked[i-1][j]==1||marked[i+1][j]==1||marked[i][j-1]==1||marked[i][j+1]==1) {
                //     marked[i][j] = 1;
                // }

                if (j != 0) {
                    if (arr[i][j]==1&&marked[i][j]==0&&marked[i][j-1]==1) {
                        times++;
                        marked[i][j] = 1;
                    }
                }
                if (j != l-1) {
                    if (arr[i][j]==1&&marked[i][j]==0&&marked[i][j+1]==1) {
                        times++;
                        marked[i][j] = 1;
                    }
                }
                if (i != 0) {
                    if (arr[i][j]==1&&marked[i][j]==0&&marked[i-1][j]==1) {
                        times++;
                        marked[i][j] = 1;
                    }
                }
                if (i != h-1) {
                    if (arr[i][j]==1&&marked[i][j]==0&&marked[i+1][j]==1) {
                        times++;
                        marked[i][j] = 1;
                    }
                }
            }
        }
        // printf("%d ", times);
    } while (times!=0);

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {
            printf("%d ", marked[i][j]);
        }
        printf("\n");
    }
    return **marked;
}

int islandFinder(int **arr, int **marked) {
    printf("Island finder initiated \n");
    int amt=0;

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < l; j++) {

            if ( arr[i][j]==1&&marked[i][j]==0) {
                **marked = marker(arr, marked, i, j);
                printf("amount +1\n");
                amt++;
            }
        }
    }
    return amt;
}

int main() {

    int **arr = (int**)malloc(sizeof(int *)*h);

    for (int i = 0; i < h; i++) {
        arr[i] = (int*)malloc(sizeof(int)*l);
        for (int j = 0; j < l; j++) {

            arr[i][j] = rand() % 2;
            printf(" %d", arr[i][j]);

        }
        printf("\n");
    }

    int **marked = (int**)calloc(h,sizeof(int *));
    for (int i = 0; i < h; i++) {
        marked[i] = (int*)calloc(l,sizeof(int));
    }

    int amt = islandFinder(arr, marked);
    printf("The amount of islands is: %d", amt);

    free(arr);
    free(marked);
    return 0;

}