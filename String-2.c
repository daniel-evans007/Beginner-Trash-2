//Printing words SEPARTELY, of a string.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char a[50],n[50];
	int i,j,k=0,l=0;
	system("cls");
	printf("Enter a sentence : ");
	gets(a);
	l=strlen(a);
	a[l]=' ';
	a[l+1]='\0';
	for (i=0;i<=l;i++)
	{
		if (a[i]!=' ')
		{
			n[k++]=a[i];
		}
		else
		{
			n[k]='\0';
			printf("%s\n",n);
			k=0;
		}
	}
}