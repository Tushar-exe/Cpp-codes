#include<stdio.h>
//using namespace std;
#include<stdlib.h>
int main(){
    char str;
    int num;
    printf("enter the number of characters\n");
    scanf("%d",&num);
    
    char*ptr = (char*)malloc(num*sizeof(char)+1);
    printf("enter the string\n");
    scanf("%s",ptr);
    printf("%s",ptr);
    free(ptr);
}
