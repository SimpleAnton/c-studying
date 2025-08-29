#include<stdio.h>

int solver (int a, int b) {
    if (a==1) {
        printf("1\n");
        return 0;
    }

    for (int i=1;i<=b;i++) {

        for (int j=1;j<=b;j++) {
//i=2  j=4
            int temp=a;

            if (i<=a) {
                temp = (temp>i)?(i):(temp);
            } else {
                temp = (temp>(i-b)*-1+1)?((i-b)*-1+1):(temp);
            }

            if (j<=a) {
                temp = (temp>j)?(j) : (temp);
            } else {
                temp = (temp>(j-b)*-1+1)?((j-b)*-1+1):(temp);
            }

            if (i==a&&j==a) {
                printf("1 ");
            } else {
                printf("%d ", a-temp+1);
            }
        }
        printf("\n");
    }
}

int main () {

    int inp;

    printf("Enter a number: ");
    scanf("%d",&inp);

    int temp = solver (inp, inp*2-1);

    return 0;
}