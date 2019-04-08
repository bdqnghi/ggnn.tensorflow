int max(char x[])
{
	int m,i,n=0;
	char a=x[0];
	m=strlen(x);
	for(i=1;i<=m-1;i++)
	{
		if(x[i]>a)
		{
			a=x[i];
			n=i;
		}
	}
	return n;
}
void main()
{
	int n,l,j;
	char sa[14];
	char str[11],substr[4];
	while(scanf("%s%s",str,substr)!=EOF)
		 {
	 	l=strlen(str);
		n=max(str);
		for(j=0;j<=n;j++)
			sa[j]=str[j];
		for(j=n+1;j<=n+3;j++)
			sa[j]=substr[j-n-1];
		for(j=n+4;j<=l+2;j++)
			sa[j]=str[j-3];
		sa[l+3]='\0';
		printf("%s\n",sa);
		 }
}
