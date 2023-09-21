#include<stdio.h>
int main(){
	char a[20],b[30];
	printf("Enter string:");
	scanf("%s",&a);
	strcpy(a,b);
	strrev(b);
	if(strcmp(a,b)==0){
		printf("It is pallindrome");
	}
	else{
		printf("It is not pallindrome");
	}
	
}
