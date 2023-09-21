#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,sum=0,k;
    int* ptr;
    printf("enter no of elements\n");
    scanf("%d",&n);
     ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
    

    scanf("%d",&ptr[i]);
}
   
    for(i=0;i<n;i++){
        sum=sum+ptr[i];
    }
    printf("sum is %d",sum);
    free(ptr);
}
