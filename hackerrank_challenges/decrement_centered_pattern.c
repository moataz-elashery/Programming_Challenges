/*
 * decrement_centered_pattern.c
 *
 *  Created on: Sep 9, 2022
 *      Author: ala_s
 */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n,i,j,max;
    printf("Enter matrix size:");
    fflush(stdin);fflush(stdout);
    scanf("%d", &n);

    /* Index the rows and columns from -n+1 to n-1 with zero at its center */
    for(i=-n+1;i<n;i++)
    {
        for(j=-n+1;j<n;j++)
        {
            max=abs(i)>abs(j)?abs(i):abs(j);
            printf("%d",max+1);
            printf(" ");
        }

        printf("\n");
    }
    return 0;
}
