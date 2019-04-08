void main()
{
	char s[200],a[100][15];int i,j=0,n,r=1;
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]==' '){a[r][j]='\0';r++;j=0;}
		else {a[r][j]=s[i];j++;}
	}
	a[r][j]='\0';
	printf("%s",a[r]);
	for(i=r-1;i>0;i--)
	printf(" %s",a[i]);
}