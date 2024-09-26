//program to get simple interest
#include <stdio.h>
int main() {
    int principal;
    int rate;
    int time;

    //
    printf("Enter principal");
    scanf("%d",&principal);

    printf("Enter rate: ");
    scanf("%d",&rate);

    printf("entr time in years");
    scanf("%d",&time);

    // calculate simple interest
    int interest;
    interest=(principal*rate*time)/100;

    printf("simple interest is %d",interest);

    return 0;
}