void main()
{
	char *p[100];
	int i;
	for (i=0;i<100;i++)
	    *(p+i)=(char *)malloc(100);
	i=0;
	while (scanf("%s",*(p+i))!=EOF)
	{
		i++;
	}
	int j=0;
	printf("%s",*(p+i-1));
	for (j=i-2;j>=0;j--)
		printf(" %s",*(p+j));
}
	