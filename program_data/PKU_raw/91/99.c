int main()
{
	char x[100];
	int a[100],i,n;
	char str[100];
	gets(str);
	n=strlen(str);
	for(i=1;i<n;i++)
	{
		a[i]=str[i-1]+str[i];
	}
	a[n]=str[0]+str[n-1];
	for(i=1;i<=n;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}