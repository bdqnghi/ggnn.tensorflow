void main()
{
	int j;
	char a[13],b[5];
	while(scanf("%s%s",a,b)!=EOF)
	{
		int l=strlen(a);
		int k=0;
		for(j=0;j<l;j++)
		{
			if(a[j]>a[k]) k=j;
		}
		j=0;
		while(j<=k)
		{
			printf("%c",a[j]);
			j++;
		}
		printf("%s",b);
		while(j>k&&j<l)
		{
			printf("%c",a[j]);
			j++;
		}
		printf("\n");
	}
}