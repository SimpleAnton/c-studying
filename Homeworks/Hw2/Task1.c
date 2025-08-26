#include <math.h>
#include<stdio.h>

int main() {

    int a=1;
    int b=1;

    do {
        if (a<=0) printf("That's not appropriate number. Choose something different.\n");
        printf("Please enter a number: \n");
        scanf("%d",&a);
    } while (a<=0);

    do {
        if (b<=0) printf("That's not appropriate number. Choose something different.\n");
        printf("Please enter another number: \n");
        scanf("%d",&b);
    } while (b<=0);

    int min = a>b?b:a;
    int max = a>b?a:b;

    printf("The minimum number entered is %d\nThe maximum number entered is %d\n",min,max);

    int temp1=1;
    int temp2=0;
    int temp3=0;

    for (int i=1; i<=max; i++) {

        temp3 = temp1+temp2;

        if (min<=i) {
            printf("%d ",temp3);
        }
        temp1=temp2;
        temp2=temp3;
    }

}