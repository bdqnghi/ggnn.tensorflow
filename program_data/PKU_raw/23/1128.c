void main()
{
	char a[100];
	int b[100],c[100];
	int B,C,k,i,j;
	gets(a);
	b[0]=0;
	B=1;
	C=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(((a[i]!=' ')&&(a[i+1]==' '))||a[i+1]=='\0')
		{
			c[C]=i;
			C=C+1;
		}
	}
	for(i=1;a[i]!='\0';i++)
	{
		if ((a[i-1]==' ')&&(a[i]!=' '))
		{
			b[B]=i;
			B=B+1;
		}
	}
	for(i=B-1;i>0;i--)
	{
		for(j=b[i];j<=c[i];j++)
			printf("%c",a[j]);
		printf(" ");
	}
	for(j=b[0];j<=c[0];j++)
			printf("%c",a[j]);
}
