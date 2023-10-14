#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    //(int*) * means typecasting. A is called as pointer
    int* A = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        A[i]= i+1;
        //*(A + i) = i + 1; another way of writing   A[i]= i+1;
    }
    //Reallocating the memory. Realloc tracks 3 things: existing block, size, capacity
    //On top of the size it allocates little more memory
    int* B = (int*)realloc(A, 2*n*sizeof(int));
    printf("Previous block address = %p, new address = %p\n", A, B);
    for(int i=0; i<2*n;i++){
        printf("\t%d\n", B[i]);
    }


    //Reallocating the memory
    int *C = (int*)realloc(A, (n/2)*sizeof(int));
    printf("Previous block address = %p, new address = %p\n", A, C);
    for(int i=0; i<n;i++){
        printf("\t%d\n", C[i]);
    }
}