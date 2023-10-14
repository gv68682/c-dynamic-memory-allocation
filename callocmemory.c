#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter size of array\n");
    scanf("%d", &n);
    //(int*) * means typecasting. A is called as pointer
    int* A = (int*)calloc(n,sizeof(int)); //Dynamically setting memory in HEAP
    //Though we remove this for loop and run, in the next
    //loop, all the byte positions will be initilized to '0'
    //It's not the same case with malloc function.
    for(int i=0; i<n;i++){
        A[i] = i+1;//dereferencing
    }
    for(int i=0; i<n; i++){
       printf("%d\n", A[i]);
    }
}