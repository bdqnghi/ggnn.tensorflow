// A+B ??.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"

int main()
{
	char a[251],b[251],j[260]={'\0'},A[251]={'\0'},B[251]={'\0'};
	int ac,bc,i,k,c,j1,j2,jw=0,p=0;
	gets (a);
	gets (b);
	ac=strlen(a);
	bc=strlen(b);
	if (ac>bc)
	{
		c=ac;
		for (i=0;i<ac-bc;i++)
			B[i]='0';
		B[i]='\0';
		strcat(B, b);
		strcpy(A,a);
	}
	if (ac<bc)
	{
		c=bc;
		for (i=0;i<bc-ac;i++)
			A[i]='0';
		A[i]='\0';
		strcat(A, a);
		strcpy(B, b);
	}
	if (ac==bc)
	{
		c=ac;
		strcpy(A,a);
		strcpy(B,b);
	}
	for (i=c-1,k=0;i>=0;i--,k++)
	{
		j1=A[i]-'0';
		j2=B[i]-'0';
		if (j1+j2+jw<=9)
		{
			j[k]=j1+j2+jw+'0';
			jw=0;
		}
		else
		{
			j[k]=j1+j2+jw-10+'0';
			jw=1;
		}
		if (i==0&&jw==1)
			j[k+1]='1';
	}
	if (j[0]=='0'&&j[1]=='\0')
		printf("0");
	c=strlen(j);
	for (i=c-1;i>=0;i--)
	{
		if (j[i]!='0'||p==1)
		{
			printf("%c", j[i]);
			p=1;
		}
		
	}

	return 0;
}

