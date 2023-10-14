#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter a number to set the length of an array\n");
    scanf("%d", &n);

    int *A = (int*)malloc(n*sizeof(int)); //Dynamically setting memory in heap.
    for(int i=0; i<n; i++){
        A[i] = i+1;
    }
    //  
    for(int i=0; i<n; i++){
       printf("%d", A[i]);
    }
}