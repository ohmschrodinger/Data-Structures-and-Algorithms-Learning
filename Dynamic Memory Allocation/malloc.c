#include <Stdio.h>
#include <stdlib.h>
#include <unistd.h>


//malloc is memory allocation
//calloc is contageous allocation 

int main()
{

    //creating a dynamic array using malloc

    int n;
    printf("Enter the number of elements u want to add in array: ");
    scanf("%d" ,&n);

    int* ptr; //a pointer that stores the address of dynamically created variable;
    ptr = (int* ) malloc(n*sizeof(int));


    for(int i =0; i<n ; i++)
    {
        printf("Enter the array element of index[%d]: ",i);
        scanf("%d" , &ptr[i]);
    }

   for(int i =0; i<n ; i++)
    {
        printf("%d \n", ptr[i]);
        sleep(1);
     
    }

    return 0;



}