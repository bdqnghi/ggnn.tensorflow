main()
{
	char a[101],b[101];
	int i,n,j=0;
	gets(a);
	n=strlen(a);
	for(i=n-1;i>=0;i--)
	{
		if(a[i]!=' ')
		{
			b[j]=a[i];
			j++;
		}
		else
		{
			for(j-=1;j>=0;j--)
			printf("%c",b[j]);
			j=0;
			putchar(' ');
		}
	}
	for(i=0;;i++)
	{
		if(a[i]==' '||i==n)break;
		else putchar(a[i]);
	}
	putchar('\n');


	
}


