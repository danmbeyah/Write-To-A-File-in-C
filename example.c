#include <stdio.h>
#include <stdlib.h>  /* For exit() function */

int main()
{
    int scores_arr[1000]; // Declare array to hold user input. Array will have less than 1000 elements
    int i, N;
    float sum =0, avg=0;
    char sentence;
   
    FILE *fptr;
    
    fptr = fopen("test.txt", "w");
    if(fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }
       
    //printf("Enter a sentence:\n");
    //scanf("%d", &N);

   //fprintf(fptr,"%s", sentence);
   fclose(fptr);

    printf("Enter positive integer for number of elements to be added and averaged : \n");
    scanf("%d", &N);

    /* Add elements to array */
    printf("Enter the %d scores to be added and averaged : \n", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &scores_arr[i]);
    }


    /*
     * Print all elements of array using array notation
     */
    printf("\nElements in array are: \n");
    for(i=0; i<N; i++)
    {
        printf("Score %d ", i);
        printf("\t %d ", scores_arr[i]);
        printf("\n");

        //printf("Score %d \t %d \n", i, scores_arr[i]);
        fprintf(fptr,"%s", scores_arr);
        sum +=scores_arr[i];
    }
    
    printf("-------------------------\n");
    printf("Sum \t %f", sum);
    printf("\n");
    printf("Avg \t %f", sum/N);
    printf("\n-------------------------\n");
    
    /*
     * Print all elements of array using pointer notation
     */
    printf("\nElements in array are: \n");
    for(i=0; i<N; i++)
    {
        printf("%d ", *(scores_arr + i));
    }

    return 0;
}