// Daniel Smith Evan ---> D.S.Evans
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[50],n[50];
	int i,j,k=0,l=0;
	printf("Enter a name : ");
	gets(a);
	l=strlen(a);
	n[k++]=a[0];
	n[k++]='.';
	for (j=l;a[j]!=' ';j--);
	for (i=0;i<j;i++)
	{
		if (a[i]==' ')
		{
			n[k++]=a[i+1];
			n[k++]='.';
		}
	}
	for (i=j+1;i<l;i++)
	{
		n[k++]=a[i];
	}
	n[k++]='.';
	n[k]='\0';
	printf("\nName in the desired format is : %s",n);
}