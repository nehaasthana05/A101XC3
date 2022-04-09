#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
    double *ptr;
   
    int n, i,j,k,temp=0; 
    
    printf("Enter number of elements: "); //asking user for input
      scanf("%d",&n);
    ptr = (double*)malloc(n * sizeof(double)); 
    if (ptr == NULL) { 
        printf("Memory not allocated.\n");   // if pointer directed to null space then print out error message
        exit(0); 
    } 
    else{
      
        for (i = 0; i < n; ++i) { 
            printf("the element %d : ",i); //create loop for printing all elements/input, where n is the no. of elements
            scanf("%lf",&ptr[i]);
        } 

 
        printf("Unsorted array: \n"); //print unsorted array
        for (i = 0; i < n; ++i) { 
            printf("%1.2lf ",ptr[i]);
            printf(" "); 
        } 
         for(k=0;k<n;k++)  // create loop to sort the unsorted array
       {
         j = k;
         while(j>0)
          {
            if(ptr[j-1] > ptr[j])
            {
                int temp = ptr[j-1];
                ptr[j-1] = ptr[j];
                ptr[j] = temp;  //temp:variable used for swapping
            }
            else
            {
                break;
            }
            j--; //end loop
          }
       }
       printf("\nsorted array: \n"); 
        for (i = 0; i < n; ++i) { 
            printf("%1.2lf  ",ptr[i]);  //print sorted array corrected upto 2 decimal spaces.
     
         } 

    } 

  
    return 0; 
}