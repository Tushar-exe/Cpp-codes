#include<stdio.h>
#include <string.h>

int main()

{
	char a[10];// string declaration
	printf("Enter the string:");
	scanf("%s",a);
	int x=strlen(a),i;
	for(i=x-1;i>=0;i--)
    {
       printf("%c",a[i]);
    }


}
	

