#include<stdio.h>

int solver(int inp, int temp) {

    if (inp<2) return 0;
    if (temp==1) return 1;
    if (inp % temp==0) return 0;

    return solver(inp,temp-1);
}
int main() {

    int inp;

    printf("Please enter a number: \n");
    scanf("%d",&inp);

    if (inp<=0) {
        printf("That's not a good choice.. \n");
    } else {
        int res=solver(inp, inp-1 );
        if (res==1) {
            printf("%d is a primary number. \n",inp);
        } else {
            printf("%d is not a primary number. \n",inp);
        }
    }

    return 0;

}