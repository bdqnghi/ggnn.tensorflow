void main()
{
	int n,i=0;
	char a[10],b[10];
	scanf("%s",&a);
	while(a[i]!='\0')
	{
		i++;
	}
	n=i-1;
	for(i=0;i<=n;i++)
	{
		b[i]=a[n-i];		
	}
	b[n+1]='\0';	printf("%s\n",b);
}
