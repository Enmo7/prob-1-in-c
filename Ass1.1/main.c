#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, m ;

    printf("Enter the Number\n");

    scanf("%d", & a );

    m = a % 2;

    if ( m == 0){

      printf("The number is odd=0\n");

      printf("The number is even=1\n");

    } else{

        printf("The number is odd=1\n");

        printf("The number is even=0\n");
    }

    return 0;
}
