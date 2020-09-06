#include <stdio.h>
#include <stdlib.h>
#include "ice_cream.h"

int x=0;

int main()
{
    int made = 0 , sold = 0;
    printf("Please Enter the Amount of The Ice cream you have \n");
    scanf("%d",&x);
    printf("Please Enter the Amount of The Ice cream you made \n");
    scanf("%d",&made);
    printf("Please Enter the Amount of The Ice cream you sold \n");
    scanf("%d",&sold);

    adding(made);
    subtracting(sold);

    printf("The Total Amount you have is %d \n",x);

    return 0;
}
