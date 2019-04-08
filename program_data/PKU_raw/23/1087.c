void main()
{
	char c[100];
	char a[100][100];
	int i,k,j,n,m=-1;
	gets(c);
	n=strlen(c);
	int b=n;
	for(i=n-1;i<n&&i>=0;i--)
	{
		if(c[i]==' ')
		{
			m=m+1;
		for(j=0;j<b-i-1;j++)
		{
			a[m][j]=c[i+1+j];
			
		}
        a[m][j]='\0';
		printf("%s ",a[m]);
		b=i;
		}
	}
	for(j=0;j<b;j++)
		a[m+1][j]=c[j];
	printf("%s",a[m+1]);
}

