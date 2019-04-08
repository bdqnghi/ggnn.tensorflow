main()
{
	int i=0;
	char a[50][40],b[50];
	while(scanf("%s",b)!=EOF)
	{
		strcpy(a[i],b);
		i++;
	}
	int j;
	printf("%s",a[i-1]);
	for(j=i-2;j>=0;j--)
		printf(" %s",a[j]);
}