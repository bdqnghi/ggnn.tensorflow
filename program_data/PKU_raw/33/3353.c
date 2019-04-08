int main()
{
	char a[1000][256];
	char num[10];
	int i,j,len,n;
	gets(num);
	n=atoi(num);
	for(i=0;i<n;i++)
	{
		gets(a[i]);
		len=strlen(a[i]);
		for(j=0;j<=len;j++)
		{
			if(a[i][j]=='A') a[i][j]='t';
			if(a[i][j]=='T') a[i][j]='a';
			if(a[i][j]=='G') a[i][j]='c';
			if(a[i][j]=='C') a[i][j]='g';
		}
	}
	for(i=0;i<n;i++)
	{
		len=strlen(a[i]);
		for(j=0;j<=len;j++)
		{
			if(a[i][j]=='a') a[i][j]='A';
			if(a[i][j]=='t') a[i][j]='T';
			if(a[i][j]=='c') a[i][j]='C';
			if(a[i][j]=='g') a[i][j]='G';
		}
		printf("%s\n",a[i]);
	}
	return 0;
}