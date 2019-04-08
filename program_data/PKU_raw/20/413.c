int find(char c[])
{
	int i,k;
	k=0;
	i=0;
	while(c[i]!='\0')
	{
		if(c[i]>c[k])
			k=i;
		i++;
	}
	return(k);
}

void main()
{
	char a[100],b[100];
	int i,k;
	while(scanf("%s%s",a,b)!=EOF)
	{
	k=find(a);
	for(i=0;i<=k;i++)
		printf("%c",a[i]);
	printf("%s",b);
	i=k+1;
	while(a[i]!='\0')
	{
		printf("%c",a[i]);
		i++;
	}
	printf("\n");
	}
}