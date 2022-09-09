# Programming Challenges
To save different problem solving codes

## Hackerrank Challenges

### 1) Printing Pattern using loops

Target Pattern when n = 4

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4 

```c
   
   /* Index the rows and columns from -n+1 to n-1 with zero at its center */
    for(i=-n+1;i<n;i++)
    {
        for(j=-n+1;j<n;j++)
        {
            /* Find the largest index of both rows and columns*/
            /* The largest index represent a frame */
            max=abs(i)>abs(j)?abs(i):abs(j);
            /* Print the index + 1 */
            printf("%d",max+1);
            printf(" ");
        }

        printf("\n");
    }
